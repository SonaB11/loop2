#include <stdio.h>
int main()
{
int n;
scanf(" enter value of n :%d",&n);
 int i=1;
 while (i<=n)
 {
 int j=1;
 while (j<=n)
 if (j==1)
 {	
 	printf("%s" ,"* ");
 	j++;
 
}

else 
{
	printf("%s","*  ");
	i++;
}
}
return 0;
}


 	
 	
 	
 
