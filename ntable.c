#include <stdio.h>
int main()
{
int n,p;
scanf("%d",&n);
for( int i=1; i<=10; i++)
{
p=n*i;
printf("%d",n);
printf("%s","*");
printf("%d",i);
printf("%s","=");
printf("%d\n",p);
}
return 0;
}


