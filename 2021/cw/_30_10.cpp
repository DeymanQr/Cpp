#include <iostream>
#include <string>

using namespace std;

//int factorial(int a) {
//	int res = 1;
//	for (int i = 2; i < a; i++)
//		res *= i;
//	return res;
//}
//
//float f(float a, float b) {
//	if (a == 10)
//		return b - 3;
//	else if (a < 10 && b < 10)
//		return f(a - b, factorial(abs(a) + abs(b)));
//	else if (a < 10 && b > 10)
//		return a * a * a + 4;
//	else
//		return f(f(a / 2, b / 2), f(a - 3, sqrt(b)));
//}


const int key_len = 5;
const string alphabet = "abcdefghijklmnopqrstuvwxyz";

//1 - 26
//11 - 15

int get_int_from_key(string* key) {
	int res = 0;
	for (int i = 0; i < key_len; i++) {
		res = (res + key[i].length() * alphabet.find(key[i][0]) + alphabet.find(key[i][key[i].length()-1])) % alphabet.length();
	}
	return res;
}

int main() {
	string shifr_key[key_len] = { "interesting", "try", "zero", "negative", "apple" }, 
		deshifr_key[key_len] = {"banana", "run", "array", "ninf", "present"};
	string input;
	getline(cin, input);
	string output = "", 
		output_output = "";

	for (int i = 0; i < input.size(); i++) {
		if (alphabet.find(input[i]) <= alphabet.length())
			output += alphabet[(alphabet.find(input[i]) + alphabet.length() - get_int_from_key(shifr_key)) % alphabet.length()];
		else
			output += input[i];
	}

	for (int i = 0; i < output.size(); i++) {
		if (alphabet.find(output[i]) <= alphabet.length())
			output_output += alphabet[(alphabet.find(output[i]) + alphabet.length() - get_int_from_key(deshifr_key)) % alphabet.length()];
		else
			output_output += input[i];
	}

	cout << output << endl << output_output << endl;

	/*string input;

	getline(cin, input);

	bool is_num = false;
	int num = 0;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] - 48 >= 0 && input[i] - 48 <= 9) {
			is_num = true;
			num = num * 10 + (input[i] - 48);
		}
		else if (is_num) {
			if (num % 2 == 0)
				cout << num << endl;
			num = 0;
			is_num = false;
		}
	}
	if (is_num && num % 2 == 0)
		cout << num << endl;*/

	/*int day;
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cin >> day;

	if (day < 0) {
		cout << "Too small day" << endl;
		return 0;
	}
	
	int i = 0;
	while (i < 12) {
		if (day > months[i]) {
			day -= months[i];
			i++;
		}
		else {
			if (day < 10)
				cout << '0';
			cout << day << '.';
			if (i < 10)
				cout << '0' << i+1;
			else
				cout << i+1;
			cout << endl;
			return 0;
		}
	}
	cout << "Too big day"<< endl;*/

	/*int a, b;
	cin >> a;
	cin >> b;
	cout << f(a, b);*/
}
