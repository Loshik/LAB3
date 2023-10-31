#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter the value of n ");
	scanf("%d",&n);
	if(n<0)
	printf("The factorial of the given number cannot be determined ");
		printf("The factorial of the given number cannot be determined ");
	return 0;
    	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of the given number is %d",fact);
	if(n==0)
	printf("The factorial of the given number is 1");
	return 0;
}