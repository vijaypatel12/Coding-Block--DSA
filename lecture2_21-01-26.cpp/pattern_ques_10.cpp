#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}



// * * * * * * 
//   * * * * * 
//    * * * * 
//     * * * 
//      * * 
//       * 