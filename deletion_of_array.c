#include<stdio.h>
void main(){
int a[100],i,pos,n;
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
printf("enter the position of the element you want to delete:");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
return;
}
