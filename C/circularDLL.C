#include<stdio.h>
#include<stdlib.h>
typedef struct DLL
{
    int data;
    struct DLL *right,*left;
}node;
node *head;
node* getnode()
{
    node *t;
    int n;
    t=(node)malloc(sizeof(node));
    if(t==NULL)
    {
        printf("not found");
    }
    else{
        printf("enter the data ");
        scanf("%d",&n);
        t->data=n;
        t->right=NULL;
        t->left=NULL;
    }
    return t;
}
void insertend()
{
    node *curr,*temp;
    if(head==NULL)
         head=temp;
    else{
        if(head->right=NULL)
          {
            head->right=temp;
            temp->left=head;
            temp->right=head;
          }
          else
          {
            curr=temp;
            while(curr->right!=head)
            {
                    curr=curr->right;
            }
            curr->right=temp;
            temp->left=curr;
            temp->right=head;
            head->left=temp;
          }
    }
}
void deletend()
{
    node *curr,*prev;
    if(head!=NULL)
        printf("list is empty");
    else{
        curr=head;
        while(curr!=head)
        {
            prev=curr;
            curr=curr->right;
        }
        prev->right=head;
        curr->right=NULL;
        head->left=prev;
        free(curr);
    }
}
void display()
{
    node *curr;
    if(head==NULL)
         printf("list not found ");
    else{
        curr=head;
        printf("the elements are");
        while(curr->right!=head)
        {
            printf("%d",curr->data);
            curr=curr->right;
        }
    }
}
int main()
{
    int i;
    while(1)
    {
        printf("\n1 for inster, 2 for display, 3 for exit");
        scanf("%d",&i);
        switch(i)
        {
            case 1:insertend();
                     break;
            case 2:deletend();
                     break;
            case 3:display();
                     break;
            case 4:exit(0);
        }
    }
    return 0;
}