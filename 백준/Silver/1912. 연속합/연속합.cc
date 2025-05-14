#include <iostream>
using namespace std;

int arr[100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	result = arr[0];
	for (int i = 1; i < n; i++) {
		arr[i] = max(arr[i -1] + arr[i], arr[i]);
		result = max(result, arr[i]);
	}
	cout << result << endl;
	return 0;
}