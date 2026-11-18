#include<iostream>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    int d,e;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        d=a-b;
        e=b-c;
        if((d==1)&&((e==1)||(e==-2)))
        cout<<"YES\n";
        else if((d==-1)&&((e==-1)||(e==2)))
        cout<<"YES\n";
        else if((d==2)&&(e==1))
        cout<<"YES\n";
        else if((d==-2)&&(e==1))
        cout<<"YES\n";
        else cout<<"NO\n";
    
    }
}