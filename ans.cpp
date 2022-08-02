class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast=head,*slow=head,*temp=head;
        int count1=1,count2=0;// Taking count1=1 is very imp
        while(temp!=NULL)
        {
            temp=temp->next;
            count2++;// size of LL
        }
         if(count2 == n)// VI condition
        {
            head=head->next;
            return head;
        }
        int k=count2-n;
        while(count1<k)
        {
            fast=fast->next;
            count1++;
        }
        fast->next=fast->next->next;
        return head;   
    }
};
