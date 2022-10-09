int getNthFromLast(Node *head, int n)
{
       Node* ahead = head;
       Node* notAhead = head;
       int i = 1;
       while(i <= n){
           i++;
           if(!ahead)
                return -1;
           ahead = ahead->next;
       }
       while(ahead){
           ahead = ahead->next;
           notAhead = notAhead->next;
       }
       return notAhead->data;
}
