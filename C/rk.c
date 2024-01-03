#include<stdio.h>
void main()
{int i;
 int a[]={1,2,32,24,6,28,7};
 int b=0;
 int c=0;
for(i=0;i<7;i++)
    {
    if(a[i]>b)
        {c=b;
        b=a[i];
    }
    else
        {if(a[i]>c)
        c=a[i];
        }
    }
printf("\n%d",c);

}