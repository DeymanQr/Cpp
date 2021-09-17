#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
	cin >> a >> b;
	cin >> c >> d;
	if (abs(a - c) == 1 || abs(b - d) == 1)
		cout << "YES";
	else
		cout << "NO";
}
