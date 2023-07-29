#include <stdio.h>
int main ()
{
int a,b,c,d,n,harmonic_no,p,sum=0;
scanf("%d %d %d %d ",&a,&b,&c,&d);
for (int i=1; i<=n;i++)
{
p=1/a+1/b+1/c+1/d;
sum=n/p;
}
printf("%d",sum);
return 0;
}
