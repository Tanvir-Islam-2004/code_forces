#include<stdio.h>
int main()
{
    int a,b;
    int y=0;
    scanf("%d %d",&a,&b);
    if(a<=b)
    {
        while(1)
        {
            a=a*3;
            b=b*2;
            y++;
            if(a>b)
            {
                printf("%d",y);
                break;
            }
        }
 
 
    }
 
}
