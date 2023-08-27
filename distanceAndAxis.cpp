#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    ll a,k;
    cin>>a>>k;
    if(a==k){
        cout<<0<<endl;
    }
    else if(a>k && (a%2)== (k%2)){
        cout<<0<<endl;
    }
    else if(a>k && (a%2)!=(k%2)){
        cout<<1<<endl;
    }
    else{
        cout<<k-a<<endl;
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