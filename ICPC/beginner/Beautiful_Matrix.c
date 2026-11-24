#include<stdio.h>
#include<math.h>
int main()
{
   int a[5][5];
   int diff;
   int c=0;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
              scanf("%d",&a[i][j]);
       }
   }
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
              if(a[i][j]==1)
              {
                  diff=abs(i-2);
                  if(diff==1)
                  {
                    c++;
                  }
                  else if(diff==2)
                  {
                      c=c+2;
                  }
                  //else c=0;
              }
              if(a[i][j]==1)
              {
                  diff=abs(j-2);
                  if(diff==1)
                  {
                    c++;
                  }
                  else if(diff==2)
                  {
                      c=c+2;
                  }
                  //else c=0;
              }
 
       }
   }
   printf("%d",c);
}
 