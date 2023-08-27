#include<bits/stdc++.h>
using namespace std;
int solve(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    if(is_sorted(arr,arr+n)){
        long long minDiff=INT_MAX,diff=0;
        for(long long i=1;i<n;i++){
            diff=arr[i]-arr[i-1];
            minDiff=min(minDiff,diff);
        }
        cout<<minDiff/2+1<<'\n';
        int count=0;
    }
    else{
        cout<<"0\n";
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}