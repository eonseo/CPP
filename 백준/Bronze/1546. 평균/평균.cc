#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, max = -1;
	double sum = 0, *arr, tmp;

	cin >> n;
	arr = new(nothrow) double[n];
	if (!arr)
	{
		cerr << "Allocation fail" << endl;
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		tmp = arr[i] / max * 100;
		sum += tmp;
	}
	cout << sum / n << endl;

	delete[] arr;
	arr = NULL;
	return 0;
}
