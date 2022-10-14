#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;


class Solution0 {
public:
    int findRepeatNumber(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       for (int i = 0; i < nums.size()-1; i++){
        if (nums[i] == nums[i+1]){
            return nums[i];
        }
       } 
       return -1;  
    }
};

class Solution {
public:
    int findRepeatNumber(vector<int>& nums){
        unordered_set<int> ss;
        for (int i = 0; i < nums.size(); i++){
            if (ss.count(nums[i]) == 0){
                ss.insert(nums[i]);
            }
            else{
                return nums[i];
            }
        }
        return -1;
    }
};



int main() {
    Solution solution;
    int result;
    vector<int> nums = {2, 3, 1, 0, 2, 5, 3};


    result = solution.findRepeatNumber(nums);
    
    cout << result << endl;
}
