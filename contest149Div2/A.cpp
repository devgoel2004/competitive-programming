#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k;
    cin>>n>>k;
    if(n<k){
        cout<<1<<"\n";
        cout<<n<<"\n";
    }
    else if(n==k){
        cout<<2<<'\n';
        cout<<n-1<<" "<<1<<"\n";
    }
    else if(n%k!=0 && n>k){
        cout<<1<<'\n';
        cout<<n<<'\n';
    }
    else{
        cout<<2<<"\n";
        cout<<n-k-1<<" "<<k+1<<"\n";
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