#include  <stdio.h>
int main()
{
int n,sum,i,prod;
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
prod=prod*i;	
   sum=sum+(1/i);
   printf("%d",sum);
}
return 0;
}
