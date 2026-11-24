#include<iostream>
using namespace std;
int match(int x);
int main()
{
    int z;
    int y;
    cin>>y;
    while(1)
    {
        y++;
        z=match(y);
        if(z!=0){
        cout<<z;
        break;
        }
        else continue;
    }
}
int match(int x)
{
    int c[4];
    int i=0;
    int d=x;
    while(x!=0){
    c[i++]=x%10;
    x=x/10;
}
    int flag=0;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(c[i]==c[j])
            {
                flag=1;
                break;
            }
        }
        
    }
    if(flag==0)
        {
            return d;
            
        }
        else return 0;

}

