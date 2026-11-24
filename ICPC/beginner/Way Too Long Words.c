#include<stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d",&n);
 
    char str[101];
    
    for(int i=0;i<n;i++)
    {
        scanf("%s", str);   
 
        int lenth = strlen(str);
 
        if(lenth <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            printf("%c%d%c\n", str[0], lenth-2, str[lenth-1]);
        }
    }
 
    return 0;
}