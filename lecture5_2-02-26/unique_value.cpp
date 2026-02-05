#include<iostream>
#include<set>

using namespace std;
int main(){

    int arr[100],n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cout<<s.size();
    return 0;
}