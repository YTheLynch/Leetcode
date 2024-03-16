struct node {
    int data;
    node *next;
};

class CircularLinkedListStack {
    node *top;
    public:
        CircularLinkedListStack() {
            top = NULL;
        }
        void printlist() {
            if (top == NULL) {
                cout << endl;
            } else {
                node *ptr = top -> next;
                do {
                    cout << ptr->data;
                    ptr = ptr->next;
                } while (ptr != top -> next);
                cout << endl;
            }
        }
        
        void push(int data) {
            node *newnode = new node;
            newnode -> data = data;
            if (top == NULL) {
                newnode -> next = newnode;
                top = newnode;
            } else {
                newnode -> next = top -> next;
                top -> next = newnode;
            }
            
        }
        int pop() {
            if (top == NULL) {
                return '\0';
            } else if (top -> next == top) {
                int ele = top -> data;
                top = NULL;
                return ele;
            } else {
                int ele = top -> next -> data;
                top -> next = top -> next -> next;
                return ele;
            }
        }
        bool isEmpty() {
            if (top == NULL) return true;
            return false;
        }
        int getTop() {
            if (top != NULL) return top -> next -> data;
            return -1;
        }

};


class Solution {
public:
    int longestValidParentheses(string s) {
        CircularLinkedListStack obj;
        obj.push(-1);
        int max = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                obj.push(i);
            } else {
                obj.pop();
                if (obj.isEmpty()) {
                    obj.push(i);
                } else {
                    int len = i - obj.getTop();
                    max = (max > len) ? max : len;
                }
            }
        }

        return max;
    }
};