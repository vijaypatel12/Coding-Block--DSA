#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first value: ";
    cin>>a;
    cout<<"Enter second value: ";
    cin>>b;
    cout<<"Enter third value: ";
    cin>>c;
    if(a>b&& a>c){
        cout<<"maximum no. a"<<a;
    }
    else if(b>a&& b>c){
        cout<<"maximum no. b "<<b;
    }
    else{
        cout<<"maximum no. c "<<c;
    }

    return 0;
}