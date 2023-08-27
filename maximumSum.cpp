#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int B[n+1];
        B[0]=arr[0];
        for(int i=0;i<n;i++){
            B[i+1]=B[i]+arr[i];
        }
        int maxi=0;
        for(int i=0;i<=m;i++){
            maxi = max(maxi,B[n-i]-B[2*(m-i)]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}