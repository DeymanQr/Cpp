#include <iostream>
//#include "windows.h"
//#include <string>
//#include <cctype>

using namespace std;


int main() {
	/*int a, b, c=0, i=0;
	cin >> a >> b;
	while (a > 0) {
		if (a % 10 != b) {
			c += a % 10 * pow(10, i);
			i++;
		}
		a /= 10;
	}
	cout << c;*/

	/*int a, i=0;
	cin >> a;
	while (int(a / pow(10, i)) != 0) {
		i++;
	}
	cout << a % 10 + int(a / pow(10, i-1));*/

	/*int a, i=0;
	cin >> a;
	if (int(a / pow(10, 4)) == 0) {
		while (int(a / pow(10, i)) != 0) {
			i++;
		}
		for (int j = 1; j < i; j++)
			cout << '0';
		cout << a;
	}
	else if (int(a / pow(10, 4)) / 10 == 0)
		cout << a;
	else
		cout << a % 100000;*/

	/*int a, b=0, i=0;
	cin >> a;
	while (int(a / pow(10, i)) != 0) {
		if (int(a / pow(10, i)) % 10 > b)
			b = int(a / pow(10, i)) % 10;
		i++;
	}
	cout << b;*/

	/*int a, b, c, d, e, f;
	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;
	cout << a * b + c * d + e * f;*/

	/*int a, b, c;
	cin >> a;
	b = a + 3;
	c = a + b;
	cout << a << endl << b << endl << c;*/

	/*int a;
	cin >> a;
	cout << a * 3;*/

	/*int a;
	char b;
	float c;
	bool d;
	cin >> a >> b >> c >> d;
	cout << a << b << c << d;*/

	/*int a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << (a + b) / 2*/;

	/*int a;
	cin >> a;
	cout << a % 10 << a / 10 % 10 << a / 100 % 10 << a / 1000;*/

	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	string c;
	cin >> a;
	for (int i = 3; i >= 0; i--) {
		b = int(a / pow(10, i)) % 10;
		switch (i)
		{
		case 3: {
			switch (b)
			{
			case 1: {c += "тисяча ";break;}
			case 2: {c += "дві тисячі ";break;}
			case 3: {c += "три тисячі ";break;}
			case 4: {c += "чотири тисячі ";break;}
			case 5: {c += "п'ять тисяч ";break;}
			case 6: {c += "шість тисяч ";break;}
			case 7: {c += "сім тисяч ";break;}
			case 8: {c += "вісім тисяч ";break;}
			case 9: {c += "дев'ять тисяч ";break;}
			}
			break;
		}
		case 2: {
			switch (b)
			{
			case 1: {c += "сто ";break;}
			case 2: {c += "двісті ";break;}
			case 3: {c += "триста ";break;}
			case 4: {c += "чотириста ";break;}
			case 5: {c += "п'ятсот ";break;}
			case 6: {c += "шістсот ";break;}
			case 7: {c += "сімсот ";break;}
			case 8: {c += "вісімсот ";break;}
			case 9: {c += "дев'ятсот ";break;}
			}
			break;
		}
		case 1: {
			switch (b)
			{
			case 1: {
				switch (a % 10)
				{
				case 1: {c += "одинадцять ";break;}
				case 2: {c += "дванадцять ";break;}
				case 3: {c += "тринадцять ";break;}
				case 4: {c += "чотирнадцять ";break;}
				case 5: {c += "п'ятнадцять ";break;}
				case 6: {c += "шістнадцять ";break;}
				case 7: {c += "сімнадцять ";break;}
				case 8: {c += "вісімнадцять ";break;}
				case 9: {c += "дев'ятнадцять ";break;}
				case 0: {c += "десять ";break;}
				}
				break;
			}
			case 2: {c += "двядцять ";break;}
			case 3: {c += "тридцять ";break;}
			case 4: {c += "сорок ";break;}
			case 5: {c += "п'ятдесят ";break;}
			case 6: {c += "шістдесят ";break;}
			case 7: {c += "сімдесят ";break;}
			case 8: {c += "вісімдесят ";break;}
			case 9: {c += "дев'яносто ";break;}
			}
			break;
		}
		case 0: {
			if (a / 10 % 10 != 1) {
				switch (b)
				{
				case 1: {c += "один";break;}
				case 2: {c += "два";break;}
				case 3: {c += "три";break;}
				case 4: {c += "чотири";break;}
				case 5: {c += "п'ять";break;}
				case 6: {c += "шість";break;}
				case 7: {c += "сім";break;}
				case 8: {c += "вісім";break;}
				case 9: {c += "дев'ять";break;}
				}
				break;
			}
		}
		}
	}
	b = a / 10 % 10;
	if (b == 1)
		c += "доларів";
	else {
		int d = a % 10;
		if (d == 1)
			c += "долар";
		else if (d >= 2 && d <= 4)
			c += "долара";
		else
			c += "доларів";
	}
	cout << c;*/
	
	char a, b;
	int w, h;
	cin >> a >> b;
	cin >> w >> h;
	if (w < 0)
		w *= -1;
	else if (h < 0)
		h *= -1;
	switch (a)
	{
	case 's': {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				cout << b;
			cout << endl;
		}
		break;
	}
	case 'f': {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (i == 0 || j == 0 || i == h - 1 || j == w - 1)
					cout << b;
				else
					cout << ' ';
			}
			cout << endl;
		}
		break;
	}
	case 'p': {
		float c;
		for (int i = 1; i <= h; i++) {
			//cout << sqrt(pow(sqrt(pow(w, 2) + pow(h, 2)) / h * i, 2) - 1) << endl;
			c = sqrt(pow(sqrt(pow(w, 2) + pow(h / 2, 2)) / h / 2 * i, 2) - 1);
			for (int j = 0; j < w; j++) {
				if (abs(w / 2 - j) <= c)
					cout << b;
				else
					cout << ' ';
			}
			cout << endl;
		}
		break;
	}
	}
	/*case 'r': {
		for (int i = 0; i < h; i++) {
		}
	}*/
}

