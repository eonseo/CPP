#include <iostream>

using namespace std;

#define MAX 300

int t;
int arr[MAX];
int dp[MAX];

void solution() {
	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
	for (int i = 3; i < t; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}
	cout << dp[t - 1] << endl;
}

void input() {
	cin >> t;
	for (int i = 0; i <= t; i++) {
		cin >> arr[i];
	}
}

void solve() {
	input();
	solution();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}