#include<bits/stdc++.h>
using namespace std;
int solve(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
long long ans =0;
    map <long long, long long> m;
    for(long long i=0;i<n;i++){
        m[arr[i]-i-1]++;
    }
    for(auto it:m){
        ans = ans+ ((it.second)*(it.second-1))/2;
    }
    cout<<ans<<'\n';
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}