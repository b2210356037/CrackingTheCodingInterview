#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string URLify(string input, int trueLength) {
        string res;
        for(int i = 0; i < trueLength; i++){
            if(isalpha(input[i])){ // If the current character is an alphabet,
                res += input[i]; // add it directly to the result string
                continue; // and move to the next character
            }
            // If the current character is a space and it's not the last character or followed by another space,
            if(i < trueLength -1 && input[i+1] != ' '){
                res += "%20"; // replace it with "%20" in the result string
            }
        }

        return res;
    }
};

int main() {
    Solution s;
    cout << s.URLify("Mr  John   Son", 14) << endl;

    return 0; // End of the program
}
