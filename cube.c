#include <stdio.h>
int main()
{
int i,p ,n,sum=0;
scanf("%d",&n);
printf("%s","cubes are:\n");

for(i=1;i<n;i++)
{
p=i*i*i;
 printf("%d\n",p);
 sum=sum+p;
 }
 printf("total sum of cubes=");
 printf("%d",sum);
return 0;
}
