#include<iostream>
using namespace std;

int main() {
	int n1=10,n2=4;
	
	int i=1;
	while(n1>0){
		int term=3*i+2;
		if(term%n2!=0){
			cout<<term;
			n1--;
              cout<<endl;
		}
		i++;
      
	}

	return 0;
}