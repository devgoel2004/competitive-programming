#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ll n;
    cin>>n;
    ll a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
    }
    ll ans1=0,ans2=0,ans3=0;
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(int i=0;i<n;i++){
        ans1+=a[i];
    }
    for(int i=0;i<n-1;i++){
        ans2+=b[i];
    }
    for(int i=0;i<n-2;i++){
        ans3+=c[i];
    }
    cout<<ans1-ans2<<endl;
    cout<<ans2-ans3<<endl;
    return 0;
}