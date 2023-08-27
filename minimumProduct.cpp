#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10e9+7
#define endl '\n'
int solve(){
    ll a,b,x,y,n,product,product1;
    cin>>a>>b>>x>>y>>n;
    ll a1 = a;
    ll b1 = b;
    ll z=n;
    while(n--){
        if(b>=y){
            b--;
        }
        else if(a>=x){
            a--;
        }
        product = a*b;
    }
    while(z--){
        if(a1>=x){
            a1--;
        }
        else if(b1>=y){
            b1--;
        }
        product1 = a1*b1;
    }
    cout<<product<<endl;
    cout<<product1<<endl;
    cout<<min(product,product1)<<endl;
    return 0;
}
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}