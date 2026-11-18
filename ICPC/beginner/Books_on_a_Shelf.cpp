#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int h[n];
    int f[n];
    int sum=0;
    for(int i=0;i<t;i++)
    {
        f[i]=1;
        cin>>h[i];
    }
    sort(h, h + n);
    int x=0;
    int count=0;
    for(int m=0;m<t;m++)
    {
        for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<n;j++)
        {
            if(h[i]==h[j])
            {
                f[i]+=1;
                x=f[i];
            }
        }
        //i=f[i]+1;
        i=x;
        count++;
    }
      for(int i=0;i<count;i++)
    {
        if(f[i]>3)
        sum+=f[i];
        else
        sum+=2;        
    }
    cout<<sum<<"\n";
    sum=0;

}
    
    
}