#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int front = 0;
        int back = nums.size()-1;
        for(int i = nums.size()-1; i >=0; i--){
            if(abs(nums[front])>abs(nums[back])){
                ans[i] = nums[front]*nums[front];
                front ++;
            }
            else{
                ans[i] = nums[back]*nums[back];
                back --;
            }
        }
        return ans;
    }
};