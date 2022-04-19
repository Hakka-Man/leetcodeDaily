#include <vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int index = 1;
        int arrSize = nums.size();
        for(int i = 1; i < arrSize; i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};