#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans[n]={0};
    unordered_set <int> s;
    for(int i=n-1;i>=0;i--){
        s.insert(arr[i]);
        ans[i]= s.size();
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        cout<<ans[x-1]<<'\n';
    }
    return 0;
}