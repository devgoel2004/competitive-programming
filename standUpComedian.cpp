#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if(a==0){
        ans=1;
    }
    else{
        ans = a;
        ans = ans+2*(min(b,c));
        ans = ans+ min(a+1,abs(b-c)+d);
    }
    cout<<ans<<'\n';
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