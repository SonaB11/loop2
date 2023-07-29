#include <stdio.h>
int main()
{
int i,n,p,sum=0;
scanf("%d",&n);
p=i*i;
for (i=1;i<=n;i++)
{
	if(i%2==0)
	{
	printf("%d",(sum+p));
	}
	else
	{
	printf("%d",(sum-p));
 	}
}
return 0;
}
