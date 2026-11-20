#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int countUper=0;
    int countLower=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        countUper++;
        else
        countLower++;
    }
    if(countUper>countLower){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;

    }
}