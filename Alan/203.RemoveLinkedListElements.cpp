struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return nullptr;
        }
        ListNode* temp = head;
        ListNode* prev = head;
        bool first = true;
        while(temp){
            if(temp->val == val){
                if(temp == head){
                    head = head->next;
                    temp = temp->next;
                    prev = prev->next;
                }
                else{
                    temp = temp->next;
                    prev->next = temp;
                }
            }
            else{
                if(first){
                    first = false;
                    temp = temp->next;
                }
                else{
                    temp = temp->next;
                    prev = prev->next;
                }
            }
        }
        return head;
    }
};