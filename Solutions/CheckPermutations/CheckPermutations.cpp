#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPermutation(string s1, string s2) {
        map<char, int> s1map, s2map;
        int s1len = s1.size(), s2len = s2.size();

        //if s1 is longer than s2, then it is impossible for s1 to be a permutation of s2, so change the order of the strings
        if (s1len > s2len){
            return false;
        }

        for (int i = 0; i < s1len; i++) {
            //count the frequency of each character in the strings
            s1map[s1[i]]++;
            s2map[s2[i]]++;
        }

        for (int i = 0; i < s2len - s1len; i++) {
            if (s1map == s2map) return true;
            //move the window by one character
            //add the next character to the window
            s2map[s2[i + s1len]]++;
            s2map[s2[i]]--; //remove the first character from the window
            if(s2map[s2[i]] == 0) s2map.erase(s2[i]); //if the character count is 0, remove it from the map
        }
        return s1map == s2map;
    }
};
