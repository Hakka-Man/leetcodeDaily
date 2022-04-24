struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return nullptr;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next&&fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                break;
            }
        }
        if(!fast->next||!fast->next->next)
            return nullptr;
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};