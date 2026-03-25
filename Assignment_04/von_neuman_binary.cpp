#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--){
        string s;
        cin>>s;
        int result=0;
        for(int i=0;i<s.length();i++){
        
            result=result*2+(s[i]-'0');
        }
        cout<<result<<endl;
    }
}