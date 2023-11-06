#include<stdio.h>
int main()
{
	int n,rev=0,rem,a;
	printf("Enter the value of n :");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		rem=a%10;
		a=a/10;
		rev=rev*10+rem;
	}
	printf("%d",rev);
	if(n==rev)
	printf("The given number is a palindrome ");
	else
	printf("The given number is not a palindrome ");
	return 0;
}
