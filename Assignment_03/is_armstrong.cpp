#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    int sum = 0, i = 0;

    while (i < s.length()) {
        sum += pow(s[i] - '0', s.length());
        i++;
    }

    cout << (sum == n ? "true" : "false");
    return 0;
}
