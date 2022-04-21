#include <vector>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int maxRight = 0;
       int temp = arr[arr.size()-1]; 
       for(int i = arr.size()-2; i>=0; i--){
           maxRight = max(maxRight,temp);
           temp = arr[i];
           arr[i] = maxRight;
       }
       arr[arr.size()-1] = -1;
       return arr;
    }
};