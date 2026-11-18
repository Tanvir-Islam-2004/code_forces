#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    int flag=0;
    int count=0;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='B')
        count++;
      for(int j=0;j<n;j++)
      { 
        if(s[j]==s[j+1])
        count++;        
      }
    cout<<count<<"\n";
    count=0;

    }
    
    
}