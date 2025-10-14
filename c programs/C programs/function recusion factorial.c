#include<stdio.h>

int main()
{
	int x,n;
	printf("Enter the Number to Find Factorial:");
	scanf("%d",&n);
	x=fact(n);
	printf("Factorial of %d id %d",n,x);
	return 0;
}
int fact(int n)
{
	if(n==0)
	     return(1);
	return(n*fact(n-1));
}
