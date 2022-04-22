#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int firstMax = nums[0];
        bool second = false;
        int secondMax = nums[0];
        bool third = false;
        int thirdMax = nums[0];
        for(int num:nums){
            firstMax = max(firstMax, num);
        }
        for(int num:nums){
            if(num < firstMax && !second){
                secondMax = num;
                second = true;
            }
            else if(num < firstMax && second){
                secondMax = max(secondMax, num);
            }
        }
        for(int num:nums){
            if(num < secondMax && !third){
                thirdMax = num;
                third = true;
            }
            else if(num < secondMax && third){
                thirdMax = max(thirdMax, num);
            }
        }
        if(!second || !third){
            return firstMax;
        }
        return thirdMax;
    }
};