#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("The sum of natural numbers is %d",sum);
}