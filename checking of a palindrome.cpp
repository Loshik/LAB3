#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("Enter the value of n :");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	printf("%d",rev);
	if(n==rev)
	printf("The given number is a palindrome ");
	else if(n!=rev)
	printf("The given number is not a palindrome ");
	return 0;
}