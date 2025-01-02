#include <iostream>
using namespace std;

class Swap
{
	int tmp;

public:
	void swap(int *a, int *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, *arr;

	cin >> n >> m;
	arr = new(nothrow) int [n];
	if (!arr)
	{
		cerr << "Allocation fail" << endl;
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	
	for (int i = 0; i < m; i++)
	{
		int a, b;
		Swap swap;

		cin >> a >> b;
		for (int j = 0; j <= ((b - a - 1) / 2); j++)
		{
			if (a != b)
				swap.swap(&arr[a - 1 + j], &arr[(b - 1 - j)]);
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	return 0;
}
