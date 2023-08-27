#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
//dev goel
int solve(){
    ll xA,yA,xB,yB,xC,yC;
    cin>>xA>>yA;
    cin>>xB>>yB;
    cin>>xC>>yC;
    ll ans =1;
    if((xB<xA && xC<xA) ||(xB>xA && xC>xA)){
        //cout<<2<<endl;
        ans+=min(abs(xB-xA),abs(xC-xA));
    }
    if((yB<yA && yC<yA)|| (yB>yA && yC>yA)){
       // cout<<1<<endl;
        ans+=min(abs(yB-yA),abs(yC-yA));
    }
    cout<<ans<<endl;
    return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}