// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;


//     for (int i=1;i<=2*n+1;i++)
//         cout << "*";
//     cout <<endl;

   
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j< n-i+1;j++)
//             cout << "*";

//         for (int j=1;j<=2*i-1;j++)
//             cout <<" ";

//         for (int j=1;j<=n-i+1;j++)
//             cout << "*";

//         cout <<endl;
//     }

 
//     for (int i=n-1; i>=1;i--) {
//         for (int j=1;j<=n-i+1;j++)
//             cout << "*";

//         for (int j=1; j<=2*i-1;j++)
//             cout << " ";

//         for (int j=1;j<=n-i+1;j++)
//             cout << "*";

//         cout << endl;
//     }

   
//     for (int i=1; i<= 2*n +1;i++)
//         cout << "*";

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < 2*n - 1; i++) {

        int stars;
        if (i < n)
            stars = n - i;
        else
            stars = i - n + 2;

        int spaces = (2*n - 1) - 2*stars;

        // left stars
        for (int j = 0; j < stars; j++)
            cout << "*";

        // middle spaces
        for (int j = 0; j < spaces; j++)
            cout << " ";

        // right stars
        for (int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
