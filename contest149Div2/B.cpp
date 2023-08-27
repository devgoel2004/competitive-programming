#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int maxi = 0;
    int count=0;
    for(int i=1;i<n;i++){
        if(str[i-1]==str[i]){
            count++;
        }
        else{
            count=0;
        }
        maxi = max(maxi,count);
    }
    cout<<maxi+2<<'\n';
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}