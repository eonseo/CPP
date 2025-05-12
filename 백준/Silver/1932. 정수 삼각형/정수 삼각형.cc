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
	int **dp = new int*[n];
	int sumMax = 0;
	for (int i = 0; i < n; i++) {
		dp[i] = new int[i + 1];
	}
	dp[0][0] = arr[0][0];
	if (n >= 2) {
		dp[1][0] = dp[0][0] + arr[1][0];
		dp[1][1] = dp[0][0] + arr[1][1];
	}
	for (int i = 2; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			else if (j == i)
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			else
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		sumMax = max(sumMax, dp[n - 1][i]);
	}
	free2dimensionalArr(dp);
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

