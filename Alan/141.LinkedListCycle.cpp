
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        bool slowed = false;
        while(fast->next){
            fast = fast->next;
            if(fast == slow){
                return true;
            }
            if(slowed){
                slow = slow->next;
                slowed = false;
            }
            else{
                slowed = true;
            }
        }
        return false;
    }
};