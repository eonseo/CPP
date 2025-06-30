#include <iostream>
using namespace std;

int arr[13] = {0};

int main() {
    char tmp;
    int sum = 0, result = 0, starIdx = 0;

    for (int i = 0; i < 13; i++) {
        cin >> tmp;
        if (tmp == '*') {
            arr[i] = -1;
            starIdx = i;
        }
        else arr[i] = tmp - '0';
    }
    for (int i = 0; i < 13; i++) {
        if (i != starIdx) {
            if (i % 2 == 0) sum += arr[i];
            else sum += (arr[i] * 3);
        }
    }
    if (starIdx % 2 == 0) result = 10 - (sum % 10);
    else {
        for (int i = 0; i < 10; i++) {
            if ((sum + 3 * i) % 10 == 0) {
                result = i;
                break;
            }
        }
    }
    cout << result << endl;

    return 0;
}