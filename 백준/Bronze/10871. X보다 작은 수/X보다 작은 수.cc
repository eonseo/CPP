#include <iostream>
using namespace std;

int main()
{
	int n, x, entered;

	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> entered;
		if (entered < x)
			cout << entered << " ";
	}
	return 0;
}