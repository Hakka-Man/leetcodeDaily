#include <vector>
#include <unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int,int> count;
        for(int num:nums){
            count[num] ++;
        }
        for(int num:nums){
            if(count[num] == 1){
                return num;
            }
        }
        return 0;
    }
};

