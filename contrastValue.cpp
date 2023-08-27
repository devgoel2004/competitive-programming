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
    vector <ll> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
          //  cout<<"one\n";
            continue;
        }
        b.push_back(a[i]);
    }
    if(b.size()<=2){
        cout<<b.size()<<'\n';
        return;
    }
    int ans=2;
    for(int i=1;i<b.size()-1;i++){
        if(b[i-1]>b[i]&& b[i]<b[i+1]){
            ans++;
        }
        if(b[i-1]<b[i] && b[i]>b[i+1]){
            ans++;
        }
    }
    cout<<ans<<'\n';
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