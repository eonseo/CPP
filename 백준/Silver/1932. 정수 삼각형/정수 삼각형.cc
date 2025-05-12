#include <iostream>
using namespace std;

int n;

void	free2dimensionalArr(int **arr) {
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

int Solution(int **arr) {
	int sumMax = 0;
	if (n >= 2) {
		arr[1][0] = arr[0][0] + arr[1][0];
		arr[1][1] = arr[0][0] + arr[1][1];
	}
	for (int i = 2; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				arr[i][j] = arr[i - 1][j] + arr[i][j];
			else if (j == i)
				arr[i][j] = arr[i - 1][j - 1] + arr[i][j];
			else
				arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		sumMax = max(sumMax, arr[n - 1][i]);
	}
	return sumMax;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int result;
	cin >> n;
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[i + 1];
		for (int j = 0; j <= i; j++)
			cin >> arr[i][j];
	}
	result = Solution(arr);
	cout << result << endl;
	free2dimensionalArr(arr);
}

