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
    void reorderList(ListNode* head) {
        deque <ListNode*> dq;
        ListNode* ptr = head;
        while (ptr != NULL){
            dq.push_back(ptr);
            ptr = ptr -> next;
        }

        ListNode dummyList;
        ptr = &dummyList;

        while(!dq.empty()){
            ptr -> next = dq.front();
            dq.pop_front();
            ptr = ptr -> next;
            if(!dq.empty()){
                ptr -> next = dq.back();
                dq.pop_back();
                ptr = ptr -> next;
            }
        }
        ptr->next = NULL;
        head = dummyList.next;
    }
};