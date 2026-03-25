#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    int zeroCount = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 0)
            zeroCount++;
    }
    for(int i = 0; i < zeroCount; i++)
        cout << 0 << " ";
    for(int i = zeroCount; i < n; i++)
        cout << 1 << " ";
    return 0;
}