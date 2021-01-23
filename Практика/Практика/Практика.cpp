#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	cout << "Работу выполнили Нифакин Егор и Дубовский Андрей гр.22919/1" << endl;
	float a = 1.774, x = 1, y, z;
	int m = 5;
	do {
		y = (sqrt(a + pow(m, 2) * pow(x, 2))) / ((a + x) * m);
		x += 0.5;
		if (abs(y) < 1) {
			z = y + 1;
		}
		else z = pow(sin(y), 2);
		printf("y=%5.2f\t", y);
		printf("z=%5.2f\n", z);
	} while (x < 5);
}