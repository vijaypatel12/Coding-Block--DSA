#include<iostream>
using namespace std;
int main(){
    int bin=0,decimal,place=1;
    cin>>decimal;
    while(decimal>0){
    int rem=decimal%2;
    bin=bin+rem*place;
    place=place*10;
    decimal=decimal/2;
}
cout<<bin;


}

