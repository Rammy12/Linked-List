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
    int getlength(ListNode* head)
    {
        int n=0;
        ListNode* current=head;
        while(current!=NULL)
        {
            n++;
            current=current->next;
        }
        return n;
    }
    int getDecimalValue(ListNode* head) {
        int n=getlength(head);
        ListNode* current=head;
        int sum=0;
        while(current!=NULL)
        {
            sum+=pow(2,n-1)*current->val;
            n--;
            current=current->next;
        }
        return sum;
    }
};