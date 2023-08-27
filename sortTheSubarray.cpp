#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll x=-1,y=-1;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            x=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            y=i;
            break;
        }
    }
    for(ll i=x;i>0;i--){
        if(b[i]>=b[i-1]){
            x=i-1;
        }
        else{
            break;
        }
    }
    for(ll i=y;i<n-1;i++){
        if(b[i]<=b[i+1]){
            y=i+1;
            
        }
        else{break;}
    }
    cout<<x+1<<" "<<y+1<<"\n";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}