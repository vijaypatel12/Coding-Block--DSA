#include<iostream>
using namespace std;

int main() {
	int n,odd=0,even=0,index=1;
    cin>>n;

    while(n>0){
        int digit=n%10;
        if(index%2==1){
            even+=digit;
        }
        else{
            odd+=digit;
        }
        n=n/10;
        index++;
    }
    cout<<odd<<endl;
    cout<<even<<endl;




	return 0;
}