#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<i;k++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1+1;j++)
            cout<<"  ";
        for(int k=0;k<=n-i-1;k++)
            cout<< " *";
        cout<<endl;
    }


    return 0;
}