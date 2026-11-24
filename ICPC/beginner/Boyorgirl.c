#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[101];
    if (scanf("%s", str) != 1) return 0;
    int c = 0;
    int length = strlen(str); 
    for(int i = 0; i < length; i++)
    {
        int flag = 0;
        for(int j = i + 1; j < length; j++)
        {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            c++;
    }
    if(c % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}