#include<iostream>
using namespace std;
int main(){
    int n=15;
    if(n>0){
        cout<<"Positive if the number is greater than 0";
    }
    else if(n<0){
        cout<<"Negative if the number is less than 0";
    }
    else{
        cout<<"Zero if the number is exactly 0";
    }
    return 0;
}