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
    node *temp;
    
    temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("memory not allcoted");
    }
    else{
        printf("enter the data ");
        scanf("%d",&temp->data);
        
        temp->right=NULL;
        temp->left=NULL;
     }
    return temp;
   
}
void insertend()
{
    node *curr,*temp;
    temp=getnode();
    if(head==NULL)
         head=temp;
    else{
        if(head->right==NULL)
          {
            head->right=temp;
            temp->left=head;
            temp->right=head;
          }
          
          else
          {
            curr=head;
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
    if(head==NULL)
        printf("list is empty");
    else{
        curr=head;
        while(curr->right!=head)
        {
            prev=curr;
            curr=curr->right;
        }
        printf("deleted element is %d",curr->data);
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
         printf("%d",curr->data);
    }
}
int main()
{
    int i;
    while(1)
    {
        printf("\n1 for inster, 2 for delet,3 for display, 3 for exit");
        scanf(" %d",&i);
        switch(i)
        {
            case 1:insertend();
                    printf("iam in");
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