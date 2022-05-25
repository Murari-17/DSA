#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *createnode()
{
 return ((struct node *)malloc(sizeof(struct node)));
}
void readinfo(struct node *p)
{
 scanf("%d<=>",&p->data);
}
struct node *createlist(int N)
{
 struct node *head,*nw,*previousnode;
 int i;
 head=NULL;
 printf("Initial List =");
 for(i=0;i<N;i++)
 {
 nw=createnode();
 readinfo(nw);
 nw->next=NULL;
 nw->prev=NULL;
 if(head==NULL)
 {
  previousnode=head=nw;
 }
 else
 {
  previousnode->next=nw;
  nw->prev=previousnode;
  previousnode=nw;
 }
 }
 return (head);

}
void display(struct node *p)
{
 struct node *head,*temp;
 temp=head=p;
 while(temp!=NULL)
 {
   printf("%d<=>",temp->data);
   temp=temp->next;
 }
}
struct node * delete_even(struct node *p,int N)
{
 struct node *head,*prev,*cur,*temp;
 int i;
 temp=cur=head=p;
 prev=NULL;
 for(i=1;i<=N && cur!=NULL;i++)
  {
    if(cur->data % 2==0)
      {
        if(prev!=NULL)
        {
        prev->next=cur->next;
        if(cur->next!=NULL)
        {
        (cur->next)->prev=prev;
        }
        temp=cur;
        }
        else
        {
            head=cur->next;
            if(head!=NULL)
            {
            head->prev=NULL;
            }
            temp=cur;
        }
        cur=cur->next;
        free(temp);
      }
    else
        {
        prev=cur;
        cur=cur->next;
        }
  }
return (head);
}
int main()
{
 struct node *head1,*head;
 int N;
 scanf("%d",&N);
 head1=createlist(N);
 head=delete_even(head1,N);
 printf("Final List =");
 display(head);
 return 0;
}
