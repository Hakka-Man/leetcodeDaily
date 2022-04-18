#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int negativeIndex = 0;
        int positiveIndex = 0;
        int numsSize = nums.size();
        for(int i = 1; i < numsSize; i++){
            if(nums[i]>=0){
                negativeIndex = i-1;
                positiveIndex = i;
                break;
            }
        }
        if(positiveIndex == 0){
            negativeIndex = numsSize-1;
            positiveIndex = numsSize;
        }
        while(negativeIndex>=0&&positiveIndex<numsSize){
            if(pow(nums[negativeIndex],2)<pow(nums[positiveIndex],2)){
                ans.push_back(pow(nums[negativeIndex],2));
                negativeIndex--;
            }
            else{
                ans.push_back(pow(nums[positiveIndex],2));
                positiveIndex++;
            }
        }
        while(negativeIndex>=0){
            ans.push_back(pow(nums[negativeIndex],2));
            negativeIndex--;
        }
        while(positiveIndex<numsSize){
            ans.push_back(pow(nums[positiveIndex],2));
            positiveIndex++;
        }
        return ans;
    }
};