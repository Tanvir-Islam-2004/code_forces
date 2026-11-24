#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int sum=0;
    int diff;
    int d;
    int max=0;
    for(int i=0;i<+n;i++)
    {
        cin>>a>>b;
        diff=b-a;
        sum+=diff;
        if(max<sum)
        max=sum;
        diff=0;
    }
    cout<<max;

}