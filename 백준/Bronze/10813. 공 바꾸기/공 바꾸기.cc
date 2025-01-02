#include <iostream>
using namespace std;

class Swap
{
	int tmp;

public:
	void swap(int &a, int &b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
};

int main()
{
	int n, m, *arr;
	Swap swap;

	cin >> n >> m;

	arr = new(nothrow) int[n];
	if (!arr)
	{
		cerr << "allocation fail" << endl;
		exit (EXIT_FAILURE);
	}

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	
	for (int i = 0; i < m; i++)
	{
		int a, b, tmp;

		cin >> a >> b;
		swap.swap(arr[a - 1], arr[b - 1]);
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	delete[] arr;
	arr = NULL;
	return 0;
}
