struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next){
            return true;
        }
        ListNode* temp = head;
        int length = 1;
        while(temp->next){
            length++;
            temp = temp->next;
        }
        ListNode* latterhead = head;
        for(int i = 0; i < (length+1)/2; i++){
            latterhead = latterhead->next;
        }
        ListNode* latterheadOld = latterhead;
        while(latterheadOld->next){
            ListNode* temp = latterheadOld->next;
            latterheadOld->next = temp->next;
            temp->next = latterhead;
            latterhead = temp;
        }
        while(latterhead){
            if(head->val!= latterhead->val){
                return false;
            }
            head = head->next;
            latterhead = latterhead->next;
        }
        return true;
    }
};