#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the value of n ");
	scanf("%d",&n);
	while(n>0)
	{
		count+=1;
		n=n/10;
	}
	printf("The length of the given number is %d",count);
}