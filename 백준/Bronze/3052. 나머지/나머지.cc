#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[42] = {0, }, result = 0;

	for (int i = 0; i < 10; i++)
	{
		int num;

		cin >> num;

		arr[(num % 42)]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
			result++;
	}
	cout << result;
	return 0;
}
