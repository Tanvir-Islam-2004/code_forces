#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int len=s.size();
    int len1=t.size();
    cout<<len<<len1;
    int b=len;
    int flag=0;
    if(len==len1)
    {
    for(int i=0;i<len;i++)
    {
        if(s[i]==t[--b])      
        flag=0;
        else {flag=1; break;}
    }
}
    else flag=1;
    if(flag==0)
    cout<<"YES";
    else cout<<"NO";

}