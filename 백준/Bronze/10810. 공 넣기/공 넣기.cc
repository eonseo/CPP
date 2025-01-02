#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int	*arr, n, m;
	int start, end, ball_number;

	cin >> n >> m;
	arr = new(nothrow) int[n];
	if (!arr)
	{
		cerr << "allocation fail" << endl;
		exit(EXIT_FAILURE);
	}
	memset(arr, 0, sizeof(int) * n);
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end >> ball_number;
		for (int j = start - 1; j < end; j++)
			arr[j] = ball_number;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	delete[] arr;
	arr = NULL;

	return 0;
}