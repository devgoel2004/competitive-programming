// Shreyansh Mittal
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n' 
signed main()
{
    int T=1;
    cin>>T;
    while(T--){
       int n,k,q;
       cin>>n>>k>>q;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       vector<int>v;
       for(int i=0;i<n;i++)
       {
        int count=0;
        while(a[i]<=q)
        {
            count++;
            i++;
        }
        if(count>=k)
        {
            v.push_back(count);
        }
       }
       int ans=0;
       for(int i=0;i<v.size();i++)
       {
        // cout<<v[i]<<" ";
        ans=ans+(v[i]-k+1)*(v[i]-k+2)/2;
       }
    cout<<ans;
        cout<<"\n";
    }
    return 0;
}