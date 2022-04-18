#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int ans = 0;
        for(int num:nums){
            if(num == 1){
                temp++;
                ans = max(temp,ans);
            }
            else{
                temp = 0;
            }
        }
        return ans;
    }
    
};