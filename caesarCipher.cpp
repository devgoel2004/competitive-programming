#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
//Dev Goel
void solve(){
        ll n;
        cin>>n;
        string s = "abcdefghijklmnopqrstuvwxyz";
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        ll diff = 0;
        for(ll i=0;i<n;i++){
                diff = s2[i]-s1[i];
                //cout<<diff<<' ';
                if(diff<0){
                    diff= 26+diff;
                }
                break;
        }
        for(ll i=0;i<n;i++){
//            cout<<'z'-s3[i]<<' ';
            //cout<<s3[i]-97;
            if('z'-s3[i]<diff){
               // cout<<"y1";
                cout<<s[diff-('z'-s3[i])-1];
            }
            else{
            cout<<s[s3[i]+diff-97];
            }
        }
        //cout<<diff<<endl;
}
int main(){
        ll t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}