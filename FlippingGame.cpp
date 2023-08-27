#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int arr[n];
    int ones=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            ones++;
            arr[i]-=2;
        }
        else{
            arr[i]++;
        }
    }
    int maxi=-1;
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi = max(maxi,sum);
        }
    }
    cout<<ones+maxi<<endl;
    return 0;
}
int main(){
    solve();
    return 0;
}