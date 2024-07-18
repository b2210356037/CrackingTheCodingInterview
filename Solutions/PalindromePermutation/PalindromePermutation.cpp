#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindromePermutation(string input) {
        unordered_map<char, int> charCount;
        int oddCount = 0;

        for (char c : input) {
            if (isalpha(c)) {
                c = tolower(c);
                charCount[c]++;

                // If count is odd, increment oddCount, else decrement
                oddCount += (charCount[c] % 2) ? 1 : -1;
            }
        }

        // A valid palindrome permutation can have at most one character with an odd count
        return oddCount <= 1;
    }
};

int main() {
    Solution s;
    string input = "tact coa";
    cout << s.isPalindromePermutation(input) << endl;

    return 0;
}