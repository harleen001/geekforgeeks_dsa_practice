class Solution {
  public:
  
    Node* revList(struct Node* head)
    {
        Node *curr=head, *prev=nullptr,*next=curr->next;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;       //NCPC->P
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        num1=revList(num1);
        num2=revList(num2);
        int carry=0;
        Node* first= new Node(0);
        Node* ans=first;
        while(num1 || num2 || carry)
        {
            
            int sum=carry;
            if(num1)
            {
                sum+=num1->data;
                num1=num1->next;
                
            }
            if(num2)
            {
                sum+=num2->data;
                num2=num2->next;
                
            }
            ans->data=(sum%10);
            carry=sum/10;
            if(num1||num2||carry)
            {
                ans->next=new Node(0);
                ans=ans->next;
            }
        }
        revList(first);
        while(ans->data==0)ans=ans->next;
        return ans;
    }
};