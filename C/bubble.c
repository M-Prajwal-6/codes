#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    printf("enter the number of elents ");
    scanf("%d",&n);
    printf("enter the elements in ascending order ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

    }
}
for(i=0;i<n;i++)
      printf("%d\n",a[i]);
return 0;
}