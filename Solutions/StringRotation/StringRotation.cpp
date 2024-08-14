#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stringRotation(string s1, string s2) {
        if (s1.size() != s2.size() ) return false;
        s1 += s1;
        return s1.find(s2) != string::npos;

        /*
         * lets say s1 = xy, s2 = yx
         * if s2 is a rotation of s1, then s2 will be a substring of s1s1 due to fact that xyxy will contain yx
         * so we can just check if s2 is a substring of s1s1
         */
    }
};

int main() {
    Solution solution;
    string s1 = "waterbottle";
    string s2 = "erbottlewat";
    cout << solution.stringRotation(s1, s2) << endl;
    return 0;
}