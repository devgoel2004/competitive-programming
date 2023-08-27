#include<bits/stdc++.h>
using namespace std;
long long minimumPossibleSum(int n, int target) {
        if(n==1 && target == 1){
            return 1;
        }
        else{
           vector <int> arr;
           arr.push_back(1);
        //    cout<<arr[0];
           n=n-1;
           int i=0;
           while(n>0){
            arr.push_back(target+i);
            i++;
            n--;
           }
           //cout<<arr.size();
           int sum=0;
           for(int i=0;i<arr.size();i++){
           cout<<arr[i]<<" ";
            sum=sum+arr[i];
           }
           return sum;
        }
    }
int main(){
    int n,target;
    cin>>n>>target;
    cout<<minimumPossibleSum(n,target);
    return 0;
}