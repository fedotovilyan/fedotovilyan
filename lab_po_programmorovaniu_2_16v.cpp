#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{
	int n, koe, i, k, m;
	double sum = 0;
	koe = 0;
	cout << "Укажите размер массива: ";
	cin >> n;
	double* arr = new double[n];
	cout << "Введите значение каждого элемента массива: ";
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	double min = abs(arr[0]);
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			koe += 1;
	}
	for (i = 0; i < n; i++) {
		if (abs(arr[i]) <= min) {
			min = abs(arr[i]);
			k = i;
		}
	}
	m = k + 1;
	for (m; m < n; m++) {
		sum += abs(arr[m]);

	}
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			arr[i] = arr[i] * arr[i];
	}
	int temp, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Количество отрицательных элементов массива: " << koe << endl;
	cout << "Сумма модулей элементов массива: " << sum << endl;

	for (i = 0; i < n; i++) {
		cout << "Значение " << i << " элемента массива: " << arr[i] << endl;
	}
}