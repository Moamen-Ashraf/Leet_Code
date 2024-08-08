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
    ListNode* removeNodes(ListNode* head) {
        stack<int> s;
        while (head != NULL) {
            s.push(head->val);
            head = head->next;
        }
        
        ListNode* ptr = NULL;
        int mx = 0;
        while(!s.empty()){
            if(s.top() >= mx)
                ptr = new ListNode(s.top(), ptr);
            
            mx = max(mx, s.top());          
            s.pop();
        }
        return ptr;
    }
};