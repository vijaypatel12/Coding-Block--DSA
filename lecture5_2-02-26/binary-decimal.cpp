#include<iostream>
using namespace std;
int main(){
    int bin,decimal=0,base=1;
    cin>>bin;

    while(bin>0){
        int n=bin%10;
        decimal=decimal+n*base;
        base=base*2;
        bin=bin/10;
    

    }
    cout<<decimal;
};