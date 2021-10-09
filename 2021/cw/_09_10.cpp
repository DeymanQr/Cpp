#include <iostream>
#include <string>
#include <Windows.h>
#include <random>
#include <ctime>

using namespace std;

int main() {
	/*const int width = 10;
	int a[width][width] = { {0} };
	for (int i = 0; i < width * width; i++) {
		cout << a[i / width][i % width] << " ";
		if (i % width == width - 1)
			cout << endl;
	}

	cout << endl;

	for (int i = 0; i < width * width; i++) {
		if (i / width == 0 || i % width == 0 || i / width == width - 1 || i % width == width - 1)
			a[i / width][i % width] = 2;
		else
			a[i / width][i % width] = 1;
		cout << a[i / width][i % width] << " ";
		if (i % width == width - 1)
			cout << endl;

	}

	cout << endl;

	for (int i = 0; i < width * width; i++) {
		if (i / width == i % width || i / width + i % width == width - 1)
			a[i / width][i % width] = 7;
		else
			a[i / width][i % width] = 5;
		cout << a[i / width][i % width] << " ";
		if (i % width == width - 1)
			cout << endl;
	}

	cout << endl;
	int i1, j1;

	for (int i = 0; i < width * width; i++) {
		if (i / width > width / 2 - 1)
			i1 = width - 1 - i / width;
		else
			i1 = i / width;
		if (i % width > width / 2 - 1)
			j1 = width - 1 - i % width;
		else
			j1 = i % width;
		if (i1 + j1 > width / 2 - 2)
			a[i / width][i % width] = 7;
		else
			a[i / width][i % width] = 5;
		cout << a[i / width][i % width] << " ";
		if (i % width == width - 1)
			cout << endl;
	}*/

	/*const int width = 10, height = 8;
	int a[height][width];
	int b;
	bool c;

	srand(time(NULL));

	for (int i = 0; i < width * height; i++) {
		c = true;
		while (c) {
			c = false;
			b = rand() % (width * height);
			for (int j = 0; j < i; j++)
				if (a[j / height][j % width] == b) {
					c = true;
					break;
				}
		}
		a[i / width][i % height] = rand() % (width * height);
	}
	
	for (int i = 0; i < width * height; i++) {
		cout << a[i / width][i % height] << " ";
		if (i % height == height - 1)
			cout << endl;
	}

	cout << endl;

	for (int i = width * height; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j / height][j % width] < a[(j + 1) / height][(j + 1) % width])
				swap(a[j / height][j % width], a[(j + 1) / height][(j + 1) % width]);
		}
	}
	
	for (int i = 0; i < width * height; i++) {
		cout << a[i / height][i % width] << " ";
		if (i % width == width - 1)
			cout << endl;
	}*/

	/*const int width = 3;
	int a[width*width] = { 0 };
	int ch = 0, b;
	string d;
	bool c;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	while (true) {
		for (int i = 0; i < width * width; i++) {
			switch (a[i])
			{
			case 0: {
				SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 15));
				cout << '_';
				break;
			}
			case 1: {
				SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 4));
				cout << 'X';
				break;
			}
			case 2: {
				SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 9));
				cout << 'O';
				break;
			}
			}
			if (i % width == width - 1)
				cout << endl;
			else {
				SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 15));
				cout << "|";
			}
		}
		b = -1;
		if (a[0] == a[1] && a[1] == a[2] || a[0] == a[3] && a[3] == a[6] || a[0] == a[4] && a[4] == a[8])
			b = 0;
		else if (a[1] == a[4] && a[4] == a[7] || a[3] == a[4] && a[4] == a[5] || a[2] == a[4] && a[4] == a[6])
			b = 4;
		else if (a[6] == a[7] && a[7] == a[8] || a[2] == a[5] && a[5] == a[8])
			b = 8;
		if (b >= 0 && a[b] != 0) {
			SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 14));
			if (a[b] == 1)
				cout << endl << "X wins!" << endl;
			else if (a[b] == 2) {
				cout << endl << "O wins!" << endl;
			}
			SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 15));
			break;
		}
		c = true;
		for (int i = 0; i < width * width; i++)
			if (a[i] == 0) {
				c = false;
				break;
			}
		if (c) {
			cout << endl << "Tie!" << endl;
			SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 15));
			break;
		}

		SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | 15));
		cin >> d;
		b = d[0] - 48;
		if (b > 0 && b <= width*width && a[b-1] == 0) {
			a[b - 1] = ch % 2 + 1;
			ch++;
		}
		system("cls");
	}*/
}
