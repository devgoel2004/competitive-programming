#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll count=0;
    ll neg=0;
    for(ll i=0;i<n;i++){
        if(arr[i]<=0){
           if(arr[i]<0){
            neg=1;
           }
        }
        else{
            if(neg==1){
                count++;
                neg=0;    
            }
            
        }
    }
    //cout<<neg;
    if(neg==1){
        count++;
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=-arr[i];
        }
        sum+=arr[i];
    }
    cout<<sum<<" "<<count<<'\n';
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}