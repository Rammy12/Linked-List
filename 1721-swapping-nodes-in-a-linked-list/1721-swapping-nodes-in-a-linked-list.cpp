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
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* s = head;              
    
    for(int i=1;i<k;i++){           
        s = s -> next;
    }
    
    ListNode* slow = head;          
    ListNode* fast = s -> next;      
    
    while(fast){
        slow = slow -> next;         
        fast = fast -> next;        
    }
    swap(slow -> val, s -> val);     
    
    return head; 
    }
};