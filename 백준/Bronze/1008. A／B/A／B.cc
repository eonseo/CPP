#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	double a, b;

	cin >> a >> b;
	cout.precision(12);
	cout << fixed;
	cout << a / b;

	return 0;
}