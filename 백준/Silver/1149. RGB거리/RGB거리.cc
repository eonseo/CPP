#include <iostream>
using namespace std;

int painting[1001][3];
int input[3];

void paintingSetting() {
    painting[0][0] = 0;
    painting[0][1] = 0;
    painting[0][2] = 0;
}

void insertInput() {
    cin >> input[0];
    cin >> input[1];
    cin >> input[2];
}

void storePaintingCounts(int i) {
    painting[i][0] = min(painting[i - 1][1], painting[i - 1][2]) + input[0];
    painting[i][1] = min(painting[i - 1][0], painting[i - 1][2]) + input[1];
    painting[i][2] = min(painting[i - 1][0], painting[i - 1][1]) + input[2];
}

void solve(int n) {
    for (int i = 1; i <= n; i++) {
        insertInput();
        storePaintingCounts(i);
    }
}

void solution(int n) {
    paintingSetting();
    solve(n);
}

void printResult(int n) {
    cout << min(min(painting[n][0], painting[n][1]), painting[n][2]) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    solution(n);
    printResult(n);
    return 0;
}