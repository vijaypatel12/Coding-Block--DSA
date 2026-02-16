#include<iostream>
using namespace std;
int main(){ 
    int arr[5]={1,2,4,50,81};
    int max=arr[0];
    int max1;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
            max=arr[i-1];
        }
    }
    cout<<max;
}