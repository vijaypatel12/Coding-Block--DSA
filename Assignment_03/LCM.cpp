#include<iostream>
using namespace std;
int main(){
    int n1=4,n2=6;
    int max=(n1>n2)?n1:n2;
    while(true){
        if(max%n1==0 && max%n2==0){
            cout<<max;
            break;
        }
        max++;

    }return 0;

};