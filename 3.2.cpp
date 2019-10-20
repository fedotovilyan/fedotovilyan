

#include <iostream>
using namespace std;


int main()
{
	const double f = 12;
	const double d = 0.0254;
	const double pb = 2.2;
	double fh, mass, dh, imt;
	cout << "Please enter your height in ft: ";
	cin >> fh;
	cout << "Please enter your mass: ";
	cin >> mass;
	cout << "Please enter your height in d: ";
	cin >> dh;
	mass = mass / pb;
	fh = fh * f;
	dh = (dh + fh) * d;
	imt = mass / (dh * dh);
	cout << imt << endl;
	return 0;

}

