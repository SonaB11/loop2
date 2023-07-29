#include <stdio.h>
int main()
{
int N;
int i=1;
scanf("%d",&N);
int j=1;
while (i<=N)
{
if(j<=N)
	{
	printf("%s","*");
	j++;
	}
	else
	printf("%s\n");
	i++;
	}
	int c=1;
	if (c==1)
	{
	printf("%s","*");
	c++;
	}
	else if (c<=N)
	{
	printf("%s","  ");
	c++;
	}
	else
	{
	printf("%s","*");
	i++;
	}
	}
	return 0;
	}
	
