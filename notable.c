#include <stdio.h>
int main()
{
int i, n,p;
scanf("%d",&n);
for (i=1;i<=10;i++)
{
p=n*i;
printf("%d",n);
printf("%s","*");
printf("%d", i);
printf("%s","=");
printf("%d\n",p);
}
return 0;
}
