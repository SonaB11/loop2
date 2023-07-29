#include <stdio.h>
int main()
{
int n,k=3,sum=0;
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
	sum=sum+(i**k);
}
printf("%d",sum);
return 0;
}


