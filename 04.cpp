#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int x = matrix.size();
        int y = matrix[0].size();
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][0] <= target && matrix[i][y-1] >= target){
                
                for (int j=0; j<matrix[0].size(); j++){
                    if (matrix[i][j] == target){
                        return true;
                    }
                }
            }
        }
        return false;

    }
};


int main(){

    int target=15;
    vector<vector<int>> matrix;
    matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    Solution solution;
    bool result;
    result = solution.findNumberIn2DArray(matrix, target);
    cout << result << endl;


    
}