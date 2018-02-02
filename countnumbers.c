#include <stdio.h>
void main()
{
	int n;
	int count=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
  n=n/10;
  ++count;
  }
  printf("/nthe counted number is=%d",count);
  }
