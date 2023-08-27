#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
bool palindrome(ll temp[], int i, ll n){
    ll mid= n/2;
    for(int i=0;i<mid;i++){
        if(temp[i]==temp[i+mid]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
ll solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll temp[n];
    temp[n] = arr[n];
    ll max = *max_element(arr,arr+n);
    for(int i=max;i>=1;i--){
        temp[i] = temp[i]%i;
        if(palindrome(temp,i,n)){
            cout<<i<<endl;
            return 0;
        }
        else{
            continue;
        }
    }
    return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}