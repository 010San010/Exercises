#include <iostream>
#include <String>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cout << "Input a string.";
    cin >> s;
    cout << longestNiceSubstring(s);
}

string longestNiceSubstring(string s) {
    if (s.size() < 2) return "";

    unordered_set<char> set(s.begin(), s.end());
    for (int i = 0; i < s.size(); ++i) {
        if (set.count(tolower(s[i])) && set.count(toupper(s[i]))) continue;
        string left = longestNiceSubstring(s.substr(0, i));
        string right = longestNiceSubstring(s.substr(i + 1));
        return left.size() >= right.size() ? left : right;
    }
    return s;
}