#include<stdio.h>
void main(){
int a[100],i,pos,item,n;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
printf("enter the position of the new element:\n");
scanf("%d",&pos);
printf("enter the element:\n");
scanf("%d",&item);
n=n+1;
for(i=n-1;i>pos-1;i--)
{
a[i]=a[i-1];
}
a[pos-1]=item;
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
return;
}
