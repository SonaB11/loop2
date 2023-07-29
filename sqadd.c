#include <stdio.h>
int main()
{
int i,j,n,sum=0,p=1;
scanf("%d",&n);

for (i=1;i<=n;i++)
     {
     p=p+(p*i );
     printf("%d",p);
     printf("%s","+");
     }
     sum=sum+p;
     printf(" total:");
     printf("%d",p);
return 0;
}

