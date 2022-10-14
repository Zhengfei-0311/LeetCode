#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
       
        for(int i=0; i < nums.size(); i++){
            for(int j=i+1; j < nums.size(); j++){
                if(nums[i]==nums[j]){
                    return nums[i];
                }
            }
       }
        return -1;    
    }
};

int main() {
    Solution solution;
    int result;
    vector<int> nums = {0,1,2,3};


    result = solution.findRepeatNumber(nums);
    
    cout << result << endl;
}
