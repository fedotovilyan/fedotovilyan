

#include <iostream>
using namespace std;


int main()
{
	double km, l;
	cout << "Please enter distance in km: ";
	cin >> km;
	cout << "Please enter gas consumption in l: ";
	cin >> l;
	cout << "result: " << l / (km / 100);
	return 0;

}

