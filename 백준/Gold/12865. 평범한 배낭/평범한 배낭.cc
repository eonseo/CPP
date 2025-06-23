#include <iostream>
#define WEIGHT_MAX 100001
using namespace std;

int dp[101][WEIGHT_MAX];

int main() {
	int n, maxWeight, weight[101] = {0}, value[101] = {0};

	cin >> n >> maxWeight;
	for (int i = 1; i <= n; i++) {
		cin >> weight[i] >> value[i];
	}
	for (int w = 1; w <= maxWeight; w++) {
		for (int i = 1; i <= n; i++){
			if (w >= weight[i]) {
				dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weight[i]] + value[i]);
			}
			else {
				dp[i][w] = dp[i - 1][w];
			}
		}
	}
	std::cout << dp[n][maxWeight] << std::endl;
	return 0;
}