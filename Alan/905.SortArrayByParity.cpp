#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int front = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2 == 0){
                swap(nums[front],nums[i]);
                front++;
            }
        }
        return nums;
    }
};