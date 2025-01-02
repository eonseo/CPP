#include <iostream>
using namespace std;

int main()
{
	int n, max = -1000000, min = 100001, input;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (max < input)
			max = input;
		if (min > input)
			min = input;
	}
	cout << min << " " << max << endl;
	return 0;
}