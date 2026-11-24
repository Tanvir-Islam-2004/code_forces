#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string nums = "";
    for (int i = 0; i < s.size(); i += 2) {
        nums += s[i];
    }
 
    sort(nums.begin(), nums.end());
 
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i + 1 < nums.size()) {
            cout << "+";
        }
    }
    cout << "\n";
 
    return 0;
}