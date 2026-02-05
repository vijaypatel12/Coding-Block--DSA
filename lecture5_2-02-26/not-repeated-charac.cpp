#include<iostream>
using namespace std;
int  main(){
    string s="nammo";
   
    for(int i=0;i<s.length();i++){
        int count=0;
    
    for(int j=0;j<s.length();j++){
        if(s[i]==s[j]){
            count++;
        }
    }
    if(count==1){
        cout<<s[i];
        
    }
}
return 0;

}