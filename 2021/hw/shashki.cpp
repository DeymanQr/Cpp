#include <iostream>
#include <Windows.h>

using namespace std;

const char sides[4]{ '@', 'O', '*', '0' };

void cout_board(char board[][8]) {
	cout << " " << "  1     2     3     4     5     6     7     8" << endl;
	cout << " " << "_______________________________________________" << " " << endl;
	for (int i = 7; i >= 0; i--) {
		cout << "|     |     |     |     |     |     |     |     |" << endl;
		cout << "|  ";
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == 'X')
				cout << "   |  ";
			else {
				if (board[i][j] == '*') {
					HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 14));
					cout << "@";
				}
				else if (board[i][j] == '0') {
					HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 4));
					cout << "O";
				}
				else {
					cout << board[i][j];
				}
				HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 15));
				cout << "  |  ";
			}
		}
		cout << i+1 << endl;
		cout << "|_____|_____|_____|_____|_____|_____|_____|_____|" << endl;
	}
}

bool correct_data(int x1, int y1, int x2, int y2) {
	return (x1 >= 0 && x2 >= 0 && y1 >= 0 && y2 >= 0 && x1 <= 7 && x2 <= 7 && y1 <= 7 && y2 <= 7);
}

bool any_beats(char board[][8], int ch) {
	int y, x;
	for (int i = 1; i < 64; i++) {
		y = i / 8; x = i % 8;
		if (board[y][x] == sides[ch]) {
			if (
				(y > 1 && (
					(x < 6 && 
						(board[y - 1][x + 1] == sides[(ch + 1) % 2] || board[y - 1][x + 1] == sides[(ch + 1) % 2 + 2])
					&& board[y - 2][x + 2] == ' ') 
					|| 
					(x > 1 && 
						(board[y - 1][x - 1] == sides[(ch + 1) % 2] || board[y - 1][x - 1] == sides[(ch + 1) % 2 + 2])
					&& board[y - 2][x - 2] == ' ')
					) 
					||
				(y < 6 && (
					(x < 6 && 
						(board[y + 1][x + 1] == sides[(ch + 1) % 2] || board[y + 1][x + 1] == sides[(ch + 1) % 2 + 2])
					&& board[y + 2][x + 2] == ' ')
					|| 
					(x > 1 && 
						(board[y + 1][x - 1] == sides[(ch + 1) % 2] || board[y + 1][x - 1] == sides[(ch + 1) % 2 + 2])
					&& board[y + 2][x - 2] == ' ')
					)
					)
					)
				)
				return true;
		}
		else if (board[y][x] == sides[ch + 2]) {
			for (int j = 1; (j + y < 7) && (j + x < 7); j++) {
				if (board[j + y][j + x] == sides[(ch + 1) % 2] || board[j + y][j + x] == sides[(ch + 1) % 2 + 2]) {
					if (board[j + y + 1][j + x + 1] == ' ')
						return true;
					else
						break;
				}
			}
			for (int j = 1; (y - j > 1) && (x - j > 0); j++) {
				if (board[y - j][x - j] == sides[(ch + 1) % 2] || board[y - j][x - j] == sides[(ch + 1) % 2 + 2]) {
					if (board[j + y + 1][j + x + 1] == ' ')
						return true;
					else
						break;
				}
			}
			for (int j = 1; (j + y < 7) && (x - j > 0); j++) {
				if (board[j + y][x - j] == sides[(ch + 1) % 2] || board[j + y][x - j] == sides[(ch + 1) % 2 + 2]) {
					if (board[j + y + 1][x - j - 1] == ' ')
						return true;
					else
						break;
				}
			}
			for (int j = 1; (y - j > 1) && (j + x < 7); j++) {
				if (board[y - j][j + x] == sides[(ch + 1) % 2] || board[y - j][j + x] == sides[(ch + 1) % 2 + 2]) {
					if (board[y - j - 1][j + x + 1] == ' ')
						return true;
					else
						break;
				}
			}
		}
	}
	return false;
}

bool can_move(char board[][8], int x1, int y1, int x2, int y2, int ch) {
	if (!correct_data(x1, y1, x2, y2) || board[y2][x2] != ' ') {
		return false;
	}
	else if (board[y1][x1] == sides[ch]) {
		// 8 4 6 6
		if (any_beats(board, ch) && abs(x2 - x1) == 2 && abs(y2 - y1) == 2 && (board[y1 + (y2 - y1) / 2][x1 + (x2 - x1) / 2] == sides[(ch + 1) % 2] || board[y1 + (y2 - y1) / 2][x1 + (x2 - x1) / 2] == sides[(ch + 1) % 2 + 2])) {
			return true;
		}
		else if (!any_beats(board, ch) && abs(x2 - x1) == 1 && y2 - y1 == ch * -2 + 1) {
			return true;
		}
		else {
			return false;
		}
	}
	else if (board[y1][x1] == sides[ch + 2] && abs(y2 - y1) == abs(x2 - x1)) {
		for (int x = x1 + abs(x2 - x1) / (x2 - x1), y = y1 + abs(y2 - y1) / (y2 - y1); x < abs(x2) && y < abs(y2); x += abs(x2 - x1) / (x2 - x1), y += abs(y2 - y1) / (y2 - y1)) {
			if ((board[y][x] != ' ') && (board[y + abs(y2 - y1) / (y2 - y1)][x + abs(x2 - x1) / (x2 - x1)] != ' '))
				return false;
		}
		return true;
	}
	else {
		return false;
	}
}

void move(char board[][8], int x1, int y1, int x2, int y2, int ch) {
	if (board[y1][x1] == sides[ch]) {
		if (y2 == 7 * (1 - ch)) {
			board[y1][x1] = sides[ch + 2];
		}
		if (abs(x2 - x1) == 2) {
			board[y1 + (y2 - y1) / 2][x1 + (x2 - x1) / 2] = ' ';
		}
		swap(board[y1][x1], board[y2][x2]);
	}
	else if (board[y1][x1] == sides[ch + 2]) {
		/*cout << "Negr" << endl;
		cout << x1 << " " << y1 << " " << x1 + abs(x2 - x1) / (x2 - x1) << " " << y1 + abs(y2 - y1) / (y2 - y1) << endl;*/
		for (int x = x1 + abs(x2 - x1) / (x2 - x1), y = y1 + abs(y2 - y1) / (y2 - y1); x * (abs(x2 - x1) / (x2 - x1)) < x2 * (abs(x2 - x1) / (x2 - x1)) && y * (abs(y2 - y1) / (y2 - y1)) < y2 * (abs(y2 - y1) / (y2 - y1)); x += abs(x2 - x1) / (x2 - x1), y += abs(y2 - y1) / (y2 - y1)) {
			/*cout << x << ' ' << y << endl;*/
			board[y][x] = ' ';
		}
		swap(board[y1][x1], board[y2][x2]);
	}
}

int main()
{
	char board[8][8];
	int x1, y1, x2, y2, ch = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 1)
				board[i][j] = ' ';
			else if (i < 3)
				board[i][j] = sides[0];
			else if (i > 4)
				board[i][j] = sides[1];
			else
				board[i][j] = ' ';
		}

	while (true)
	{
		cout_board(board);
		cout << "Any beats: " << any_beats(board, ch) << endl;
		cout << "Write coordinates (x1 y1 x2 y2): " << endl;
		cin >> x1 >> y1 >> x2 >> y2; x1--; y1--; x2--; y2--;
		if (can_move(board, x1, y1, x2, y2, ch)) {
			move(board, x1, y1, x2, y2, ch);
			ch = (ch + 1) % 2;
		}
		system("cls");
	}
}
