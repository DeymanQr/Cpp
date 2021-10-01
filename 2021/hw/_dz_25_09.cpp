#include <iostream>
#include <ctime>

using namespace std;

int main() {
	/*int A[2][20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		A[0][i] = rand() % 10;
		A[1][i] = 0;
		cout << A[0][i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; i < 20; j++) {
			if (A[0][j] == A[0][i]) {
				A[1][j] += 1;
				break;
			}
		}
	}
	int a=0,b=A[1][0];
	for (int i=0;i<20;i++)
		if (A[1][i] > a) {
			a = A[1][i];
			b = A[0][i];
		}
	cout << b << " " << a;*/

	/*int A[20];
	srand(time(NULL));
	A[0] = rand() % 12;
	cout << A[0] << " ";
	for (int i = 0; i < 19; i++) {
		A[i + 1] = rand() % 12;
		while (A[i] == A[i+1])
			A[i+1] = rand() % 12;
		cout << A[i+1] << " ";
	}
	cout << endl;*/
}
