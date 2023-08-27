#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pair <vector<int,int>> v;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    for(int i=1;i<n;i++){
        if(b[i-1]>b[i]){
          v.first.push_back(l);
          v.second.push_back(r);
        }
        else{
            l=i;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
return 0;