#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll x,y,z;
       cin>>x>>y>>z;
       ll d = y/z;
       ll m = y%z;
       ll res = d+m;
      // cout<<res<<endl;
       ll prev = (d-1)*z+(z-1);
       if(prev>=x){
        ll temp = (d-1)+(z-1);
      //  cout<<temp<<endl;
        res = max(res,temp);
       }
       cout<<res<<endl;
    }
     return 0;
}