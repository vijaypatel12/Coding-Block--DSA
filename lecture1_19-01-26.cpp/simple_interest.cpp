#include<iostream>
using namespace std;
int main(){
    int time,si,principle,rate;
    cout<<"Enter your time:";
    cin>>time;
    cout<<"Enter your principle:";
    cin>>principle;
    cout<<"Enter your rate:";
    cin>>rate;
    si=(principle*rate*time)/100;
    cout<<si;
    return 0;
}