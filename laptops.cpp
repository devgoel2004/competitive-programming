#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    pair<int,int> v[t];
    for(int i=0;i<t;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v,v+t);
    for(int i=0;i<t-1;i++){
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
    return 0;
}