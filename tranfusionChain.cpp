#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
        ll n;
        cin>>n;
        string str[n];
        for(ll i=0;i<n;i++){
                cin>>str[i];
        }
        ll count=0;
        ll ans=0;
        for(ll i=1;i<n;i++){
              //  cout<<count<<" ";
                if(str[i-1]=="A" && str[i]=="A" || str[i]=="AB"){
                        count++;
                        ans = max(ans,count);
                }
                
                else if(str[i-1]=="B" && str[i]=="B" || str[i]=="AB"){
                        count++;
                        ans = max(ans,count);
                }
                
                else if(str[i-1]=="AB" &&  str[i]=="AB" || str[i]=="A" || str[i]=="B"){
                        count++;
                        ans = max(ans,count);
                }
                
                else if(str[i-1]=="O" && str[i]=="A" || str[i]=="B" || str[i]=="AB" || str[i]=="O"){
                        count++;
                        ans = max(ans,count);
                }
                else{
                        count=0;
                }
        }
        cout<<ans<<endl;
}
int main(){
        ll t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}