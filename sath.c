#include<stdio.h>
int main()
{
int i,k ,r ,c;
printf("enter the range:\n");
scanf("%d%d",&r,&c);
for(i=1;i<=r;i++)
{
k=i*c;
printf("\n%d*%d=%d",i,c,k);
}
return 0;
}
