#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<n;i++){
        sum += abs(arr[i]-arr[i-1]);
    }
    cout<<sum<<endl;
    if(sum==0){
        cout<<1<<endl;
    }
    int x=0;
    else{
    }
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