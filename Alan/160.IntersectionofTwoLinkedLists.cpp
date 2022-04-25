
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int indexA = 0;
        int indexB = 0;
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while(tempA->next){
            tempA = tempA->next;
            indexA ++;
        }
        while(tempB->next){
            tempB = tempB->next;
            indexB ++;
        }
        if(tempA==tempB){
            while(indexA > indexB){
                headA = headA->next;
                indexA--;
            } 
            while(indexB > indexA){
                headB = headB->next;
                indexB--;
            }
            while(true){
                if(headA == headB){
                    return headA;
                }
                headA = headA->next;
                headB = headB->next;
            }
        }
        return nullptr;
    }
};