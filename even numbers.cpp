#include<stdio.h>
int main()
{
	int N,i;
	printf("Enter the value of N ");
	scanf("%d",&N);
	for(i=0;i<N;i+=2)
	{
		printf("%d",i);
	}
	return 0;
}
