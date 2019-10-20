

#include <iostream>
using namespace std;


int main()
{
	double tc, tf;
	cout << "Please enter a celsius value: ";
	cin >> tc;
	tf = tc * 1.8 + 32;
	cout << tc << " degrees Celsius is " << tf << " degress Fahrrenheit." << endl;
	return 0;

}

