#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        char s = '0';
        for(int i=0;i<str.size();i++){
            if(str[i]=='?'){
                str[i]=s;
            }
            else{
                s= str[i];
            }
            cout<<s;
        }
        cout<<'\n';
        
        
    }
    return 0;
}