#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int main(){
    ll t;
    cin>>t;
    ll y=0;
    map <ll , ll> m1;
    for(ll i=1;i<10001;i++){
        y=i*i*i;
        m1[y]++;
    }
    ll r=0;
    while(t--){
        ll f=0;
        ll x;
        cin>>x;
        for(ll i=1;i<10001;i++){
            r=i*i*i;
            if(r<x){
               // cout<<r<<endl;
                if(m1[x-r]){
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}