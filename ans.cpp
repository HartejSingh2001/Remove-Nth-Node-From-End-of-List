class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast=head,*slow=head,*temp=head;
        int count=1,count2=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count2++;
        }
        
        if(count2 == n)
        {
            head=head->next;
            return head;
        }
        else
        {
            while(count<=n)
        {
            fast=fast->next;
            count++;
        }
        
        while(fast->next != NULL)
        {
            if(count==n)
            {
                slow=head;
                fast=fast->next;
            }
            else
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        
        ListNode *temp2;
        temp2=slow->next;
        slow->next=slow->next->next;
        return head;
        }
        
        
    }
};
