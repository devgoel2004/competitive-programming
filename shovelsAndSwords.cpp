#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define arr(a,n) for(int i=0;i<(n);i++) cin>>a[i]
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
void solve(){
    int a,b;
    cin>>a;
    cin>>b;
    int minI = min(a,b);
    cout<<min(minI,(a+b)/3)<<'\n';
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}