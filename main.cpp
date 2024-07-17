#include <bits/stdc++.h>

using namespace std;

/*Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures? */

class Solution {
public:
    bool isUniqueV(string input) {
        //this solution uses a vector of booleans to keep track of the characters that have been seen
        //unordered_map solutions are also possible, which give more flexibility in terms of the characters that can be used
        vector<bool> char_vector(26, false);
        for(int i = 0; i < input.size(); i++){
            if(char_vector[input[i] - 'a']){
                return false;
            }
            char_vector[input[i] - 'a'] = true;
        }
        return true;
    }

    bool isUniqueS(string input) {
        //this solution uses the sort function to sort the string and then check if there are any repeating characters
        //this solution is not as efficient as the previous one as it has a time complexity of O(nlogn)
        //but in terms of space complexity, it is better than the previous one as it uses O(1) space
        std::sort(input.begin(), input.end());

        for (int i = 0; i < input.size() - 1; ++i) {
            if (input[i] == input[i + 1]) {
                return false;
            }
        }
        return true;
    }
};


int main() {
    Solution s;
    cout << s.isUniqueV("hello") << endl;
    cout << s.isUniqueV("world") << endl;

    cout << s.isUniqueS("hello") << endl;
    cout << s.isUniqueS("world") << endl;

    return 0;
}
