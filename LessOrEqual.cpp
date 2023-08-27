#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(){
    ll n,x;
    cin>>n>>x;
    vector <ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    if(v[x-1]==v[x] && x!=0){
        cout<<-1<<'\n';
        //return 0;
    }
    else if(x==0 && v[0]==1){
        cout<<-1<<'\n';
        return 0;
    }
    else if(x==0 && v[0]>1){
        cout<<v[0]-1<<'\n';
    }
    else{
    cout<<v[x-1]<<'\n';
    }
    return 0;
}
int main(){
    solve();
    return 0;
}