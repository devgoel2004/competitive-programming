#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int p=0,f=0;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            p=v[i];
            f++;
            break;
        }
    }
    if(f==0){
        cout<<v[n-1]<<endl;
    }
    else{
        cout<<p<<endl;
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