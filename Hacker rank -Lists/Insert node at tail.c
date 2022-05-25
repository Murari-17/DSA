SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    SinglyLinkedListNode *temp=head;
    SinglyLinkedListNode *node = malloc(sizeof(SinglyLinkedListNode));
    node->data = data;
    node->next = NULL;
    if(head!=NULL)
    {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=node;
    }
    else
    {
      head=node;
    }
    return (head);
}
