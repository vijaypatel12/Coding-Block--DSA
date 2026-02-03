#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
}