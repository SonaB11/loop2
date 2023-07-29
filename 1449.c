 #include<stdio.h>
int main()
{
int n;int i; int p;
scanf("%d",&n);
for(i=1;i<n;i++)
{
for (int j=1;j<=i;j--)
{
p=i*i;
printf("%d",p);
}
}
return 0;
}

 
