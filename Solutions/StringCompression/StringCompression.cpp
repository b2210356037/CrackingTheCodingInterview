#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string string_compression(string input){
        string compressed;
        int count = 0;
        for (int i = 0; i < input.size(); i++){
            count++;
            if (i + 1 >= input.size() || input[i] != input[i + 1]){
                compressed += input[i] + to_string(count);
                count = 0;
            }
        }
        //problem definition states that the compressed string should be returned only if it is smaller than the original string
        return compressed.size() < input.size() ? compressed : input;
    }
};

int main(){
    Solution s;
    string input = "aabbcc";
    cout << s.string_compression(input);
    return 0;

}

