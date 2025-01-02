#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int cnt, num, sum = 0;

	cin >> cnt;

	int *arr = new(nothrow) int[cnt];
	if (!arr)
		return 1;
	memset(arr, 0, sizeof(int) * cnt);
	for (int i = 0; i < cnt; i++)
		cin >> arr[i];

	cin >> num;
	for (int i = 0; i < cnt; i++)
	{
		if (arr[i] == num)
			sum++;
	}
	cout << sum << endl;

	delete[] arr;
	arr = NULL;

	return 0;
}