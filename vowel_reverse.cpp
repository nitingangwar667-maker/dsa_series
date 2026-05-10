#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string reverseVowels(string s) {
        int st = 0, end = s.size() - 1;
        while (st < end) {
            if (!isVowel(s[st])) {
                st++;
            } else if (!isVowel(s[end])) {
                end--;
            } else {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
};
int main() {
    Solution sol;
    string s = "hello";
    cout << sol.reverseVowels(s) << endl; // Output: "holle"
    return 0;
}