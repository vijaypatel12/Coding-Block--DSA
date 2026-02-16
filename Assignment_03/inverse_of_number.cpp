#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,posi=1,inv=0;
    cin>>n;
    while(n>0){
        int digit=n%10;
        inv+=posi*pow(10,digit()-1);
        posi++;
        n/=10;
    }
    cout<<inv;

}