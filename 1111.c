#include <stdio.h>
int main()
{
int i, n,p,sum=0;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
sum=(sum*10)+1;
p=p+sum;
}
printf("%d", p);
return 0;
}
