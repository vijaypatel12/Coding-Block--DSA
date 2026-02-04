#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        int temp=i;
        int sum=0;
        while (temp>0)
        {
          int digit=temp%10;
          sum+=digit*digit*digit;
          temp=temp/10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
        
    }
    return 0;

}