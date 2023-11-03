#include<stdio.h>
int main()
{
	int n,i,c,a,b;
	printf("Enter the value of n :");
	scanf("%d",&n);
	if(n>2)
	{
	a=0;
	b=1;
	printf("0\n");
	printf("1\n");
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
    }
    else if(n==0)
    printf("0\n");
    else
    {
    	printf("0\n");
    	printf("1\n");
	}
	return 0;
}