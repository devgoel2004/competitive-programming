#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a) a.begin(),a.end()
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define N 10e17
void solve(){
    ll x;
    cin>>x;
    int max=0;
    int count=0;
    for(int i=1;i<=10000;i++){
        if(x%i==0){
            count++;
        }
        else{
            count=0;
        }
        if(count>max)
        max = count;
    }
    cout<<max<<'\n';
}

int main(){
    fastio;
    ll t;
    cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}