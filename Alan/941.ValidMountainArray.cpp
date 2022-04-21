#include <vector>
class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        bool peak = false;
        int prev = arr[0];
        bool first = true;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == prev){
                return false;
            }
            if(!peak){
                if(arr[i] < prev){
                    peak = true;
                    if(first){
                        return false;
                    }
                }
            }
            else if(arr[i] > prev){
                return false;
            }
            prev = arr[i];
            first = false;
        }
        if(!peak){
            return false;
        }
        return true;
    }
};