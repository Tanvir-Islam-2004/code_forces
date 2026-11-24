#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int sum1=0;
    int sum2=0;
    int flag=0;
    for (int i = 0; str1[i] != '\0'; i++) {
        sum1 += toupper(str1[i]);
        sum2 += toupper(str2[i]);
        if(sum1>sum2) {
                printf("1");
                 flag=1;
                 break;}
    else if(sum1<sum2)
        {
            printf("-1");
            flag=1;
            break;
            }
 
    }
    if(flag==0)  printf("0");
}
 
 
 
