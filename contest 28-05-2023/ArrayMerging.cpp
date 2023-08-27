#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    int arr[2*n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=a[i];
    }
    for(int i=0;i<n;i++){
        arr[n+i]=b[i];
    }
    int x[2*n+1]={0};
    for(int i=0;i<2*n;i++){
        x[arr[i]]++;
    }
    int max = *max_element(x,x+2*n+1);
    cout<<max<<'\n';
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