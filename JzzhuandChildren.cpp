#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
    ll n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
        ll l=0;
        for(int i=0;i<n;i++){
            if(ceil(arr[i]/m)>l){
                ans = i;
                l = ceil(arr[i]/m);
            }
        }
        cout<<ans+1<<endl;
    
    return 0;
}