#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n- i; j++) {
            cout << "\t";
           }
        for (int k = i; k <= i + i - 1; k++) {
            cout << k << "\t";
}
        for (int k = i + i - 2; k >= i; k--) {
            cout << k << "\t";
        }
        cout << endl;
    }

    return 0;
}
