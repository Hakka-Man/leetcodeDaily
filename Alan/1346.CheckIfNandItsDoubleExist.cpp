#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool zeroAppeared = false;
        unordered_map<int,int> doubleMap;
        for(int num:arr){
            doubleMap[num] ++;
            if(num==0&&!zeroAppeared){
                zeroAppeared = true;
                continue;
            }
            if(doubleMap[num*2] > 0){
                return true;
            }
            if(num%2==0){
                if(doubleMap[num/2] > 0){
                    return true;
                }
            }
        }
        return false;
    }
};