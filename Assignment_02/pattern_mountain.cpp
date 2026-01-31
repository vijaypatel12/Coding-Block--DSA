#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        int spaceCount = 2 * (N - i) - 1;
        for (int s = 0; s < spaceCount; s++) {
            cout << "  ";
        }

        int startValue = (i == N) ? (i - 1) : i;
        for (int j = startValue; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}