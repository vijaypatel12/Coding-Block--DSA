#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,5,6,8,5};
    int x;
    int count=0;
    cin>>x;

    for(int i=0;i<5;i++){
        if(arr[i]==x){
            count++;
        }
    }
    cout<<count;
}