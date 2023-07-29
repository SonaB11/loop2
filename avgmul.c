#include <stdio.h>
int main(){
int n,avg,sum=0,mul=1;
int i; 
scanf("%d",&n);
for (i=1;i<=20;i++)
	{
	mul=mul*i;

	sum=sum+i;
	
	}
	printf("product =%d\n",mul);
	printf("average=%d",sum/20);
	return 0;
	}
