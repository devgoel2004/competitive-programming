#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int solve(){
    ll n;
    cin>>n;
    ll x;
    vector <ll> v,p;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        p.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    ll count=0;
    bool c[m]={true};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i]==p[j] || abs(v[i]-p[j])==1){
               // cout<<v[i]<<' '<<p[j]<<endl;
                p[j]=1000;
                count++;
                
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
int main(){
    solve();
    return 0;
}