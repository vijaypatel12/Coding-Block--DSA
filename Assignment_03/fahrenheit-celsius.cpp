#include<iostream>
using namespace std;
int main(){
    int min,max,step;
    cin>>min>>max>>step;

    for(int f=min;f<=max;f+=step){
        int c=(5*(f-32))/9;
        cout<<f<<"\t"<<c<<endl;
    }
    return 0;
}