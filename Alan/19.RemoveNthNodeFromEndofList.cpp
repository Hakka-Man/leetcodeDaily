struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
            return nullptr;
        }
        ListNode* prev = head;
        ListNode* temp = head;
        int index = 0;
        int count = 1;
        while(temp->next){
            count++;
            if(index<n){
                index++;
            }
            else{
                prev = prev->next;
            }
            temp = temp->next;
        }
        if(count == n){
            return head->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};