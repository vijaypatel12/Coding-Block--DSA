#include<iostream>
using namespace std;
int main(){
    int a,b,rem=0;
    cin>>a>>b;

    while(b!=0){
        rem=a%b;
        a=b;
        b=rem; 
    }
    cout<<"GCD is: "<<a;
    return 0;
}