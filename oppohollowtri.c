#include <stdio.h>
int main()
{
int i,j,n,p;
scanf("%d",&n);
for (i=n;i>1;i--)
{
for (j=1;j<n;j++)
{
printf(" ");

for( j==1;j==(2*i-1);j++)
{
if(i==n ||j==1 || j==(2*i-1))
{
printf("*");
}
else
{
printf(" ");
j++;
}
}
}
printf("\n");
}
return 0;
}
