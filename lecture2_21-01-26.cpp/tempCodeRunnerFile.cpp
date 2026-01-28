#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    for(int i=0;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            cout<<"";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;

    }
}