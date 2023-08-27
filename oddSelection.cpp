#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define arr(a,n) for(int i=0;i<(n);i++) cin>>a[i]
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
void solve(){
    int n,x;
    cin>>n;
    cin>>x;
    int a[n];
    arr(a,n);
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd==0){
        no;
        return;
    }
    int f=0;
    for(int i=1;i<=odd;i+=2){
        if(i>x){
            break;
        }
        if((x-i)<=even){
            f=1;
            break;
        }
    }
    if(f==1){
        yes;
    }
    else{
        no;
    }
}
signed main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}