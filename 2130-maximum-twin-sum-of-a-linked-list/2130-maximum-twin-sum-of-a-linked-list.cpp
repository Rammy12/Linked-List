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
    
   
    int pairSum(ListNode* head) {
        ListNode *temp = head;
        int len = 0;
        
        while(temp != NULL){
            len++;
            temp=  temp->next;
        }
        stack<int>st;
        temp= head;
        int i = 0 , x = -1;
        while(temp != NULL){
            if (i < len/2)
                st.push(temp->val);
            else {
                x = max(x , temp->val + st.top());
                st.pop();
            }
            i++;
            temp= temp->next;
        }
        return x;
    }
};