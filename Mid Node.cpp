#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insert(node *s,int data)
{
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=(node*) malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}
void display(node *s)
{
    while(s->next!=NULL)
    {
        printf("%d\n",s->next->data);
        s=s->next;
    }
}
void midNode(node *s)
{
    node *fast=s;
    node *slow=s;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    printf("Middle node is: %d\n",slow->data);
}
int main()
{
    node *head=(node*) malloc(sizeof(node));
    head->next=NULL;
    insert(head,9);
    insert(head,5);
    insert(head,12);
    insert(head,8);
    insert(head,10);
    display(head);
    midNode(head);
}
