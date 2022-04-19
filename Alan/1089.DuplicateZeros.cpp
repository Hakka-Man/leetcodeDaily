
#include <vector>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int shift = 0;
        int arrSize = arr.size();
        int last = 0;
        bool noDuplicate = false;
        for(int i = 0; i < arrSize; i++){
            if(shift + i == arrSize - 1){
                last = i;
                if(arr[i] == 0){
                    noDuplicate = true;
                }
                break;
            }
            if(arr[i] == 0){
                shift++;
            }
            if(shift + i == arrSize - 1){
                last = i;
                break;
            }
        }
        int index = arrSize - 1;
        for(int i = last; i>=0; i--){
            if(arr[i] == 0){
                arr[index] = 0;
                index --;
                if(index < 0){
                    return;
                }
                if(noDuplicate){
                    noDuplicate = false;
                    continue;
                }
                arr[index] = 0;
            }
            else{
                arr[index] = arr[i];
            }
            index --;
            if(index < 0){
                return;
            }
        }
    }
};