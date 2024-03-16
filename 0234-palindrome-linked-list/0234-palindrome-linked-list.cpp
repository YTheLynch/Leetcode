/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v1;
        ListNode* ptr = head;
        while (ptr != NULL) {
            v1.push_back(ptr -> val);
            ptr = ptr -> next;
        }
        
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v1[v1.size() - i - 1]) return false;
        }
        
        
        return true;

    }
};