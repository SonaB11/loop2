#include <stdio.h>
int main()
{
int i ,n;
	int max=0,s_max;
	
	for (i=1;i<=3;i++)
	{
	scanf ("%d",&n);
	}
	if(n>max)
	{
		s_max=max;
		max=n;
	}
	printf("max=%d\n",max);
	printf("second max=%d",s_max);
	return 0;
	}
	
