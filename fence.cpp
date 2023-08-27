#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i] = arr[i]+arr[i-1];
    }
    int sum[n-k+1]={0};
    for(int i=k-1;i<n;i++){
        
        if(i==k-1){
            sum[i-k+1]=arr[i];
        }
        else{
            sum[i-k+1] = arr[i]-arr[i-k];
      //  cout<<arr[i]<<' '<<arr[i-k]<<endl;
        }
    }
    int min = INT_MAX;
    for(auto x:sum){
        if(x<=min){
            min=x; 
        }
    }
    for(int i=0;i<n-k+1;i++){
        if(sum[i]==min){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<min<<endl;
    return 0;
}