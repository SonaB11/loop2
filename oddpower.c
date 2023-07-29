#include <stdio.h>
int main()
{
int x,n,sum;
scanf("%d",&x);
for (int i=1; i<=n; i=i+2)
{
sum=sum+(x^i);
printf("%d",sum);
}
return 0;
}

