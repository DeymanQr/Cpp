#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

//bool isOdd(int x) {
//	if (x % 2 == 0) {
//		return false;
//	}
//	else if (x % 2 == 1) {
//		return true;
//	}
//}

int str_to_int(string a) {
	int b = 0;
	for (int i = 0; i < a.size(); i++)
		b = b * 10 + a[i] - 48;
	return b;
}

int main() {
	/*string input;
	char oper = '_';
	float out = 0, a = 0;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		if (input[i] - 48 > -1 && input[i] - 48 < 10)
			a = a * 10 + (input[i] - 48);
		else {
			if (oper == '_')
				out = a;
			else {
				switch (oper)
				{
				case '+': {
					out += a;
					break;
				}
				case '-': {
					out -= a;
					break;
				}
				case '*': {
					out *= a;
					break;
				}
				case '/': {
					out /= a;
					break;
				}
				}
			}
			oper = input[i];
			a = 0;
		}
	}

	switch (oper)
	{
	case '+': {
		out += a;
		break;
	}
	case '-': {
		out -= a;
		break;
	}
	case '*': {
		out *= a;
		break;
	}
	case '/': {
		out /= a;
		break;
	}
	}

	cout << out << endl;*/


	string input, norm_input[100]{" ", }, a = "";
	for (int i = 0; i < 100; i++) {
		//cout << "\"" << norm_input[i] << "\"" << endl;
	}
	char oper = '_';
	float out = 0;
	int ch = 0;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		if (input[i] - 48 > -1 && input[i] - 48 < 10)
			a += input[i];
		else {
			if (input[i] == '+' && input[i] == '-' && input[i] == '*' && input[i] == '/') {
				norm_input[ch] = a;
				a = "";
				ch++;
				norm_input[ch] = input[i];
				ch++;
			}
		}
	}
	int i = 0;
	while (norm_input[i] != "") {
		cout << norm_input[i] << " ";
		i++;
	}
}
