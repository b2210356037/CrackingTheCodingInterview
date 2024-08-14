#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> rotate_matrix(vector<vector<int>>& matrix){
        int n = matrix.size();
        for (int i = 0; i < n / 2; i++){
            int first = i;
            int last = n - i - 1;
            for(int j = first; j < last; j++){
                int offset = j - first;
                int top = matrix[first][j]; // save the top

                matrix[first][j] = matrix[last - offset][first];  //swap left to top
                matrix[last - offset][first] = matrix[last][last - offset]; //swap bottom to left
                matrix[last][last - offset] = matrix[j][last];  //swap right to bottom
                matrix[j][last] = top; // swap top to right
            }
        }
        return matrix;

    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    s.rotate_matrix(matrix);

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}