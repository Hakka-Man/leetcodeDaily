class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> numList;
        int index = 0;
        vector<int> ans;
        for(int num:nums){
            if(numList[target-num]>0){
                ans.push_back(numList[target-num]-1);
                ans.push_back(index);
                return ans;
            }
            numList[num] = index+1;
            index++;
        }
        return ans;
    }
};