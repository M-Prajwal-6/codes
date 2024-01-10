#include<stdio.h>
#include<stdlib.h>
typedef struct singleliked
{
    int data;
    struct singleliked *link;
}sll;
sll *head;
sll* getnode()
{
    sll *t;
    int n;
    t=(sll*)malloc(sizeof(sll));
    if(t==NULL)
    {
        printf("not found");
    }
    else{
        printf("enter the data ");
        scanf("%d",&n);
        t->data=n;
        t->link=NULL;
        return t;
    }
}
void insterend()
{
    sll *temp,*curr;
    temp=getnode();
    if(head==NULL)
    {
        head=temp;
    }
    else{
        if(head->link==NULL){
             head->link=temp;
        }
        else{
            curr=head;
            while(curr!=NULL)
                curr=curr->link;
            curr->link=temp;
        }
    }
}
void display()
{    sll *curr;
    if(head==NULL){
         printf("list is empty");
    }
    else{
      curr=head;
      printf("the elements are");
      while(curr!=NULL)
      {
        printf("%d\n",curr->data);
        curr=curr->link;
      }
    }
}
void main()
{
    int i;
    while(1)
    {
        printf("\n1 for inster, 2 for display, 3 for exit");
        scanf("%d",&i);
        switch(i)
        {
            case 1:insterend();
                     break;
            case 2:display();
                     break;
            case 3:exit(0);
        }
    }
}
