#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        for(int num:nums){
            if(abs(num) <= nums.size() && nums[abs(num)-1] > 0){
                nums[abs(num)-1] *= -1;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};