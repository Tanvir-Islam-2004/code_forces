#include<stdio.h>
int main()
{
   int a=0;
   int n;
   scanf("%d",&n);
   char str[n][4];
   for(int i=0;i<n;i++)
   {
       scanf("%s",str[i]);
       if (strcmp(str[i], "X++") == 0)
        a++;
        else if (strcmp(str[i], "X--") == 0)
        a--;
        else if (strcmp(str[i], "++X") == 0)
        a++;
        else if (strcmp(str[i], "--X") == 0)
        a--;
   }
        printf("%d",a);
}