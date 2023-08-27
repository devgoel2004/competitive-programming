#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int x =1;
    while(x*5<n){
        n=n-x*5;
        x=x*2;
    }
    string names[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cout<<names[(n-1)/x]<<'\n';
    return 0;
}