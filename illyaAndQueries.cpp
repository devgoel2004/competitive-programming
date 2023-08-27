#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n =str.length();
    int dp[100005];
    int cnt =0;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            cnt++;
        }
        dp[i]=cnt;
    }
    int m,l,r;
    cin>>m;
    while(m--){
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<'\n';
    }
    return 0;
}