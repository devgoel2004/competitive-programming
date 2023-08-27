#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(a) a.begin(),a.end()
#define fastio ios::sync_with_stdio(false);cin.tie(0)
void solve(){
   ll n;
   cin>>n;
   vector <ll> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int cnt=0;
   for(int i=0;i<n;i++){
    if(a[i]==i+1){
        cnt++;
    }
   }
   if(cnt%2==0){
    cout<<cnt/2<<'\n';
   }
   else{
    cout<<cnt/2+1<<'\n';
   }
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