

#include <iostream>
using namespace std;


int main()
{
	const double dinf = 12;
	double f, d;
	cout << "Please enter your height:_";
	cin >> d;
	f = d / dinf;
	cout << "Your height value is: " << f << " foots and " << d << " inch" << endl;
	return 0;

}

