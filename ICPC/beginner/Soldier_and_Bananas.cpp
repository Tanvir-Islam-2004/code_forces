#include<iostream>
using namespace std;
 int main()
 {
    int k,n,w;
    cin>>k>>n>>w;
    int need,borrow;
    need=k*((w*(w+1))/2);
    if(need>n){
    borrow=need-n;
    cout<<borrow;
    }
    else cout<<0;
 }