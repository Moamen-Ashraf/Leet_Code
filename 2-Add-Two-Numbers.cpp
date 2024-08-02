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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector <int> n1, n2, sum;
        
        while(l1 != NULL){
            n1.push_back(l1 -> val);
            l1 = l1 -> next;
        }
        
        while(l2 != NULL){
             n2.push_back(l2 -> val);
            l2 = l2 -> next;
        }

        int rem = 0;
        for(int i = 0; i < max(n1.size(), n2.size()); i++){
            int s = 0;
            if(i >= n1.size())
                s = n2[i] + rem;
            else if(i >= n2.size())
                s = n1[i] + rem;
            else
                s = n1[i] + n2[i] + rem;
            rem = 0;
            if(s >= 10){
                rem ++;
                s -= 10;
            }
            sum.push_back(s);
        }
        if(rem) sum.push_back(rem);


        ListNode *head = new ListNode(), *ptr = head;
        for(auto i:sum){
            ListNode *temp = new ListNode();
            temp -> val = i;
            ptr -> next = temp;
            ptr = temp;
        }
            ptr-> next = NULL;

        return head->next;
    }
};