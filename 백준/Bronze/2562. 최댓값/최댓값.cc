#include <iostream>
using namespace std;

int main()
{
	int	max = -1, input, idx;

	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		if (max < input)
		{
			max = input;
			idx = i + 1;
		}
	}
	cout << max << endl;
	cout << idx << endl;
	return 0;
}