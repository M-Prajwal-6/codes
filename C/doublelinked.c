#include<stdio.h>
#include<stdlib.h>
struct stu{
    int data;
    struct stu *right,*left;
    };
    typedef struct stu node;
   node *head=NULL;
    node* get_node()
    {
        node *temp;
        int n;
        temp=(node*)malloc(sizeof(node));
        if(temp==NULL)
          printf("no memory");
        else{
            printf("enter the value");
            scanf("%d",&n);
            temp->data=n;
            temp->right=temp->left=NULL;
             return temp;
        }
    }
    void insterend()
    {
        node *t,*curr;
        t=get_node();
        if(head==NULL)
            head=t;
        else{
            if(head->right==NULL){
                head->right=t;
                t->left=head;
                }
            else{
               curr=head;
               while(curr!=NULL)
                    curr=curr->right;
             curr->right=t;
             t->left=curr;
            }
        }
    }
    void display()
    {
        node *curr;
        int count=0;
        curr=head;
        while(curr!=NULL)
        {
            printf(" the elements are %d",curr->data);
            printf("\n");
            count++;
            curr=curr->right;
        }
        printf("\nthe number of nodes are %d",count);
    }
    void main()
    {
        int c;
        while(1)
        { printf("\nenter your choice");
           scanf("%d",&c);
            switch (c)
            {
                case 1:insterend();
                       break;
                case 2:display();
                       break;
                case 3:exit(0);
                default: printf("invalid choice");
            }
           
        }
    }
    