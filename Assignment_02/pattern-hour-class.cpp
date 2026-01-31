// #include <iostream>
// using namespace std;

// int main() {
//     int n ;
// 	cin>>n;
   
//     for (int i = n; i >= 0; i--) {
     
//         for (int s = 0; s < n - i; s++) cout << "  ";
        
//         for (int j = i; j >= 0; j--) cout << j << " ";
       
//         for (int j = 1; j <= i; j++) cout << j << " ";
//         cout << endl;
//     }
   
//     for (int i = 1; i <= n; i++) {
      
//         for (int s = 0; s < n - i; s++) cout << "  ";
       
//         for (int j = i; j >= 0; j--) cout << j << " ";
       
//         for (int j = 1; j <= i; j++) cout << j << " ";
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalRows = 2 * N + 1;

    for (int i = 0; i < totalRows; i++) {
        int val = (i <= N) ? i : totalRows - i - 1;

        // Left decreasing numbers
        for (int j = N; j >= N - val; j--) {
            cout << j << " ";
        }

        // Middle spaces
        int spaces = (N - val) * 2 - 1;
        for (int s = 0; s < spaces; s++) {
            cout << "  ";
        }

        // Right increasing numbers (avoid duplicate middle)
        if (val != 0) {
            for (int j = N - val; j <= N; j++) {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
