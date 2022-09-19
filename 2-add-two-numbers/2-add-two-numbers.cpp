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
    void insertAtTail(ListNode* &head, ListNode* &tail,int d)
    {
        ListNode* temp=new ListNode(d);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
            return;
        }
        
    }
    ListNode* Reverse(ListNode* l1)
    {
        ListNode* prev=NULL;
        ListNode* curr=l1;
        ListNode* temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* add(ListNode* l1, ListNode* l2)
    {
        int carry=0;
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        while(l1!=NULL or l2!=NULL or carry!=0)
        {
            int data1=0;
            int data2=0;
            if(l1!=NULL)
            {
                data1=l1->val;
            }
            if(l2!=NULL)
            {
                data2=l2->val;
            }
            int sum=data1+data2+carry;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            if(l1!=NULL)
            {
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                l2=l2->next;
            }
            
        }
        return ansHead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //l1=Reverse(l1);
        //l2=Reverse(l2);
        ListNode* ans=add(l1,l2);
        //ans=Reverse(ans);
        return ans;
        
    }
};