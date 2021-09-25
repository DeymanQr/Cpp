#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
	/*int w1, d1, w2, d2, h2;
	cin >> w1 >> d1;
	cin >> w2 >> d2 >> h2;
	int a = min(min(w2, d2), h2), b;
	if (a == w2)
		b = min(d2, h2);
	else if (a == d2)
		b = min(w2, h2);
	else if (a == h2)
		b = min(d2, w2);
	if (min(w1, d1) >= a && max(w1, d1) >= b)
		cout << "True";
	else
		cout << "False";*/

	/*int a;
	cin >> a;
	float b = a;
	cout << b * 0.2 */

	/*string a[3][5] = { {"2 + 2", "3", "4", "string", "4"}, {"if(0 < 0 || 6 < 7)", "true", "false", "0.1", "true"},
		{"int a = 'a'", "\'a\'", "97", "false", "97"}};
	int c = 0, b;
	for (int i = 0; i < 3; i++) {
		cout << a[i][0] << endl;
		for (int j = 1; j < 4; j++) {
			cout << j << ": " << a[i][j] << endl;
		}
		cin >> b;
		while (b < 1 || b > 3))
			cin >> b;
		if (a[i][b] == a[i][4])
			c += 10;
	}
	cout << c;*/

	/*int a[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 != 0)
			a[i] = 5;
		else
			a[i] = 10;
		cout << a[i];
	}*/
	
	/*int a[10], b=0;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 30 + 20;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0)
			b += a[i];
	}
	cout << b;*/

	/*char A[10], b;
	cin >> A;
	cin >> b;
	cout << A[b];*/

	/*int a[20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 40 - 20;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		if (a[i] > 3 && a[i] < 10)
			cout << i+1 << ": " << a[i] << endl;
	}*/

	/*int a[20], b=0;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 60 - 30;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		if (a[i] > 0)
			b += a[i];
	}
	cout << b;*/

	/*int a[10];
	char b;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		b = to_string(a[i])[0];
		if (b == '1' || b == '2' || b == '5')
			cout << a[i] << endl;
	}*/

	/*char a[11], b;
	int c = 0;
	cin >> a;
	cin >> b;
	for (int i = 0; i < strlen(a); i++)
		if (a[i] == b)
			c++;
	cout << c;*/

	string A[5] = { "hleb", "konfetka", "tortik", "banana", "simpl_dimpl" }, a;
	int C[5] = { 0, 0, 0, 0, 0 }, B[5] = { 10, 20, 30, 5, 50 }, b = 0;
	bool c;
	for (int i = 0; i < 5; i++)
		cout << A[i] << ": " << B[i] << endl;
	cin >> a;
	while (a != "exit") {
		c = true;
		for (int i=0; i<5;i++)
			if (A[i] == a) {
				b += B[i];
				C[i] += 1;
				c = false;
			}
		if (c)
			cout << "U stupid" << endl;
		cin >> a;
	}
	for (int i = 0; i < 5; i++)
		cout << A[i] << ": " << C[i] << ": " << C[i] * B[i] << endl;
	cout << b;
}
