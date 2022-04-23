class MyLinkedList {
private:
    struct Node{
        int datum;
        Node* next;
        Node* prev;
    };
    Node* head;
    Node* tail;
public:
    MyLinkedList(): head(nullptr), tail(nullptr) {
        
    }
    
    int get(int index) {
        Node* now = head;
        if(!now){
            return -1;
        }
        for(int i = 0; i<index; i++){
            now = now->next;
            if(!now){
                return -1;
            }
        }
        return now->datum;
    }
    
    void addAtHead(int val) {
        if(!head){
            head = new Node;
            head->datum = val;
            tail = head;
            head->prev = nullptr;
            head->next = nullptr;
            return;
        }
        head->prev = new Node;
        head->prev->datum = val;
        head->prev->next = head;
        head = head->prev;
        head->prev = nullptr;
    }
    
    void addAtTail(int val) {
        if(!tail){
            tail = new Node;
            tail->datum = val;
            head = tail;
            tail->prev = nullptr;
            tail->next = nullptr;
            return;
        }
        Node * temp = new Node;
        temp->datum = val;
        temp->prev = tail;
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }
        Node* now = head;
        if(!now){
            if(0 == index){
                addAtTail(val);
                return;
            }
            return;
        }
        for(int i = 0; i<index; i++){
            now = now->next;
            if(!now){
                if(i == index-1){
                    if(now == tail->next){
                        addAtTail(val);
                        return;
                    }
                }
                return;
            }
        }
        
        Node* temp = new Node;
        temp->datum = val;
        now->prev->next = temp;
        temp->prev = now->prev;
        now->prev = temp;
        temp->next = now;
    }
    
    void deleteAtIndex(int index) {
        Node* now = head;
        if(!now){
            return;
        }
        for(int i = 0; i<index; i++){
            now = now->next;
            if(!now){
                return;
            }
        }
        if(now == head && now == tail){
            head = nullptr;
            tail = head;
        }
        else if(now == head){
            now->next->prev = nullptr;
            head = now->next;
        }
        else if(now == tail){
            now->prev->next = nullptr;
            tail = now->prev;
        }
        else{
            now->next->prev = now->prev;
            now->prev->next = now->next;
        }
        delete now;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */