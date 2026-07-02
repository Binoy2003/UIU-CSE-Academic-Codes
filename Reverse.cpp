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
node *reverseList(node *s) {

    node *curr = s, *prev = NULL, *next;

    // Traverse all the nodes of Linked List
    while (curr!= NULL) {

        // Store next
        next = curr->next;

        // Reverse current node's next pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    return prev;
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
    head->next=reverseList(head->next);
    cout<<"After reverse the list"<<endl;
    display(head);
}



