#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    vector <int> c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        c.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    int maxi =0;
    int count=0;
    for(int i=1;i<2*n;i++){
        if(c[i]==c[i-1]){
            
           count++;
           maxi = max(count,maxi);
        }
        else{
            count=0;
        }
    }
    cout<<maxi+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}