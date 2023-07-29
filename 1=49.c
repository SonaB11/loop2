#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  for(int i=1;i<=49;i++)
  {
    printf("%d",i);
    printf("==");
    printf("%d\n",N);
    N--;
  }
  
  return 0;
}
