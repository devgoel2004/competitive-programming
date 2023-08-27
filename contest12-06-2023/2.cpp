#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1e9+7
void solve(){
    ll n;
    cin>>n;
    deque <ll> v;
    vector <ll> x;
    ll min_value =0;
    int c=0;
    for(int i=0;i<n;i++){
        ll q;
        cin>>q;
        if(i==0){
            v.push_back(q);
            x.push_back(1);
        }
        else if(!c && q>=v.front() && v.back()<=q){
           
            v.push_back(q);
            x.push_back(1);
        }
        else if(!c && q<= v.front() && v.back()>q){
            c=1;
            v.push_back(q);
            x.push_back(1);
        }
        else if(c && q>=v.back() && q<=v.front()){
            v.push_back(q);
            x.push_back(1);
        }
        else{
            x.push_back(0);
        }
        
    }
    for(auto c:x){
        cout<<c;
    }
    cout<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}