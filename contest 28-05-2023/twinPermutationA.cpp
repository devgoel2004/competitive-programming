#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<n+1-arr[i]<<" ";
    }
    cout<<'\n';
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