#include<stdio.h>
#include<stdlib.h>
#define Max 3
int q[Max];
int count=0;
int r=-1,f=0;
void insert()
    {
        int n;
        if(count==Max-1)
        printf("FULL");
    
else
    {
        printf("\nEnter the No:");
        scanf("%d",&n);
        r=(r+1)%Max;
        q[r]=n;
        count++;

    }}
void  delete()
    {
        if(count==0)
        printf("EMPTY");
        else
        {
            printf("\nThe deleted element is %d",q[f]);
            f=(f+1)%Max;
            count--;

        }
    }
void display()
{int i,k=f;
    if(count==0)
    printf("EMPTY");
    else
    {   
        for(i=k;i<=count;i++)
         printf("%d\t",q[i]);
    }
}
int main()
{int n;
    while(1)
    {
        printf("\nEnter the Choice:");
        printf("\n1-Insert\t2-delete\t3-display\t4-exit: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
}