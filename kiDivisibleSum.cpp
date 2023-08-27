#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
        return;
    }
    else if(n==k){
        cout<<1<<endl;
    }
    else if(k%n==0){
        ll ans =k/n;
        cout<<ans<<endl;
    }
    else if(n<k){
        ll count=0;
        count = k/n;
        cout<<count+1<<endl;
    }
    else{
        ll r =n%k;
        if(r==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}