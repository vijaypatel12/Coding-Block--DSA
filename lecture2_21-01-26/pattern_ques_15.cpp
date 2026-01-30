#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i;j++){
            cout<<"   ";
        }
        for(int k=0;k<n-i;k++){
            cout<<" * ";
        }
        cout<<endl;
    }    
    for(int i=2;i<=n;i++){
        for(int j=1;j<=2*n-i-i;j++){
            cout<<"   ";
        }
        for(int k=1;k<=i;k++){
            cout<<" * ";
        }
        cout<<endl;
    }    
} 



/*
 *  *  *  *  * 
       *  *  *  *
             *  *  *
                   *  *
                         *
                   *  *
             *  *  *
       *  *  *  *
 *  *  *  *  *

*/