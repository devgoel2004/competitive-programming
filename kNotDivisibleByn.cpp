#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k;
    cin>>n>>k;
    int div = k/(n-1);
    //cout<<div<<endl;
    int ex = k%(n-1);
   // cout<<ex<<endl;
    int ans = n*div+ex;
    if(ex==0){
        ans--;
    }
    cout<<ans<<endl;
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