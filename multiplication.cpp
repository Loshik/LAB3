#include<stdio.h>
int main()
{
	int n,i,t;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
		t=i*n;
		printf("%d \n",t);
	}
}