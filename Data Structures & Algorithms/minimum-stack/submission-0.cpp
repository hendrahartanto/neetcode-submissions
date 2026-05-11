/*
- push:
    if bottom == NULL, bottom = top = newNode
    else, top->next = newNode, newNode->prev = top, top = newNode
- pop:
    toDelete = top
    top = top->prev
    if top == NULL, head == NULL
    else, top->next = NULL
    free(toDelete)
- top:
    return the top
- getMin:
    int min = INT_MAX
    curr = bottom
    while bottom, store the curr value is lower than min value, if yes replace the min, curr = curr->next
    for the O(1) time:
    
- MinStac():
    initialize *top and *bottom to be nullptr
*/

struct Node {
    int value;
    Node *next, *prev;

    Node(int val) : value(val), next(nullptr), prev(nullptr) {}
};

class MinStack {
public:
    Node *bottom;
    Node *tip;
    
    MinStack() {
        bottom = nullptr;
        tip = nullptr; 
    }
    
    void push(int val) {
        Node *newNode = new Node(val);
        if(bottom == nullptr){
            bottom = tip = newNode;
            return;
        }

        tip->next = newNode;
        newNode->prev = tip;
        tip = newNode;
    }
    
    void pop() {
        Node *toDelete = tip;

        tip = tip->prev;
        if(tip == nullptr){
            bottom = nullptr;
        }else{
            tip->next = nullptr;
        }

        free(toDelete);
    }
    
    int top() {
        return tip->value;
    }
    
    int getMin() {
        Node *curr = bottom;
        int min = INT_MAX;
        
        while(curr != nullptr){
            if(curr->value < min){
                min = curr->value;
            }

            curr = curr->next;
        }

        return min;
    }
};
