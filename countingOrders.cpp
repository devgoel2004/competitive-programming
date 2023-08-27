#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int pos=0;
    long long ans =1;
    for(int i=0;i<n;i++){
        while(pos<n and b[pos]<a[i]){
            pos++;
        }
        ans = ans*(pos-i);
        ans = ans%mod;
    }
    cout<<ans<<endl;
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