#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for(auto x: arr){
      //  cout<<x;
    }
    ll sum=0;
    for(int i=0;i<t/2;i++){
        sum += arr[t-i-1]-arr[i];
        //cout<<arr[t-i-1]<<" "<<arr[i]<<endl;
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}