#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    int maxCount=0;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=k){
            count++;
            maxCount = max(count, maxCount);
        }
        else{
            count=0;
        }
    }
    cout<<n-(maxCount+1)<<'\n';
    //cout<<n-maxCount+1<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}