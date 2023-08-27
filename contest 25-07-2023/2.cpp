#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,m,i,j,k;
    cin>>n;
    int x;
    vector <ll> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    vector <ll> odd,even;
    vector <ll> newArr;
    for(i=0;i<n;i++){
        if(v[i]&1){
            odd.push_back(v[i]);
        }
        else{
            even.push_back(v[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    ll oddP =0, evenP=0;
    for(i=0;i<n;i++){
        if(v[i]&1){
            newArr.push_back(odd[oddP]);
            oddP++;
        }
        else{
            newArr.push_back(even[evenP]);
            evenP++;
        }
    }
    if(is_sorted(newArr.begin(),newArr.end())){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
    return 0;
}