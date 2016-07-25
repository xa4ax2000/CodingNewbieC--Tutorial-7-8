#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n_int = INT_MAX;
	int n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "The size of int is " << sizeof(int) << " bytes." << endl;
	cout << "The size of short is " << sizeof(short) << " bytes." << endl;
	cout << "The size of long is " << sizeof(long) << " bytes." << endl;
	cout << "The size of long long is " << sizeof n_llong << " bytes." << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	cout << "Minimum int value: " << INT_MIN << endl;

	return 0;
}