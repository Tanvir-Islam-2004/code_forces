#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    int m;
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
        if(c==k)
            m=a[i];
    }
    int z=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=m&&a[i]>0)
            z++;
    }
 
    printf("%d",z);
}