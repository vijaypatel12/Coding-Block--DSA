#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        int temp=arr[0];
        arr[0]=arr[2];
        arr[2]=temp;

    }for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}