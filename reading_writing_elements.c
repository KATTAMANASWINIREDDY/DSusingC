#include<stdio.h>
void main(){
int a[100],n,i;
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
return;
}
