#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll y=0;
    
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<'\n';
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
    }
    else{
        if(n%2==0 && k>1){
            cout<<"YES\n";
            y=n/2;
            cout<<y<<"\n";
            for(int i=0;i<y;i++){
                cout<<2<<" ";
            }
        }
        else{
            if(k>2){
                cout<<"YES\n";
                y = (n-2)/2;
                cout<<y+1<<'\n';
                for(int i=0;i<y;i++){
                    cout<<2<<" ";
                }
                cout<<3<<" ";
            }
            else{
                cout<<"NO";
            }
        }
    }
    cout<<"\n";
}
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}