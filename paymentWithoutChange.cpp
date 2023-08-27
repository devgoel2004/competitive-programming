#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
void solve(){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    if(s%n>b || a*n+b<s){
        no;
    }
    else{
        yes;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}