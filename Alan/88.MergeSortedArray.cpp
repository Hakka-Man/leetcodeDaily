#include <vector>
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        m--;
        n--;
        if(m==-1){
            nums1 = nums2;
            return;
        }
        for(int i = nums1.size()-1; i>=0; i--){
           if(n<0){
               return;
           }
           else if(m<0){
               nums1[i] = nums2[n];
               n--;
               continue;
           } 
           else if(nums1[m]>nums2[n]){
               nums1[i] = nums1[m];
               m--;
           }
           else{
               nums1[i] = nums2[n];
               n--;
           }  
        }
    }
};