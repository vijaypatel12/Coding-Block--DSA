#include<iostream>
using namespace std;
int reverse(int arr[],int n){
for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
}    
}
int main(){
    int n;
    cout<<"Enter size arr: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value of element: ";
        cin>>arr[i];
    }
    reverse(arr,n);

}