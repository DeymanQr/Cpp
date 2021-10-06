#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int a[20];
	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 50 + 1;
		cout << a[i] << " ";
	}
	cout << endl;

	/*int b;
	for (int i = 20; i > 0; i--) {
		b = 0;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[b])
				b = j;
		}
		wap(a[i - 1], a[b])
	}*/

	/*for (int i = 19; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j + 1], a[j])
			}
		}
	}*/

	int b = 0;
	for (int i = 1; i < 20; i++) {
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--) {
			b++;
			swap(a[j], a[j - 1]);
		}
	}

	for (int i = 0; i < 20; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
