
#include<iostream>
using namespace std;
int main() {
	int n,digit,count=0;
	cin>>n>>digit;
	while(n>0){
		int x=n%10;
		if(digit==x){
			count++;
		}
		n=n/10;
	}
	cout<<count;

	return 0;
}