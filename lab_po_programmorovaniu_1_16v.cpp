#include <iostream>

using namespace std;
int main()
{
	float Xn, Xk, dX, a, b, c, x, y;
	int j;
	int d;
	cout << "Введите диапазон и шаг изменения аргумента: ";
	cin >> Xn;
	cin >> Xk;
	cin >> dX;
	cout << "Введите значения a,b,c: ";
	cin >> a;
	cin >> b;
	cin >> c;
	j = 0;
	d = 1;
	int ac = a;
	int bc = b;
	int cc = c;
	for (x = Xn; x <= Xk; x += dX) {
		if ((x == 0) && (b != 0))
			y = a * (x + c) * (x + c);
		else {
			if ((x == 0) && (b == 0)) {
				y = (x - a) / -c;
			}

			else {
				y = a + (x / c);
			}

		}
		int yc = y;
		if (d == 1) {
			if ((((ac ^ bc) & (~(ac | cc)) != 0) && (yc != y)) || ((((ac ^ bc) & (~(ac | cc))) == 0) && (y == yc)))
				d = 1;

			else {
				cout << "Введённые значения не удовлетворяют условию задачи" << endl;
				d = 0;
			}
		}
	}


	for (x = Xn; x <= Xk; x += dX) {
		if (d == 1) {
			if ((x == 0) && (b != 0))
				y = a * (x + c) * (x + c);
			else {
				if ((x == 0) && (b == 0)) {
					y = (x - a) / -c;
				}

				else {
					y = a + (x / c);
				}
				j += 1;

				if ((j % 4 == 0) && (j >= 4)) {
					cout << y << "  " << endl;
				}
				else {
					cout << y << "  ";
				}


			}
		}

	}
}
