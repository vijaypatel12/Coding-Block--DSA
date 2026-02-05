#include<iostream>
using namespace std;
int main() {
	int sb,db,sn,decimal=0,posi=1,ans=0;
	cin>>sb>>db>>sn;

	while(sn){
		decimal+=(sn%10)*posi;
		posi*=sb;
		sn/=10;
	}
	posi=1;
	while(decimal){
		ans+=(decimal%db)*posi;
		posi*=10;
		decimal/=db;

	}
	cout<<ans;

	return 0;
}