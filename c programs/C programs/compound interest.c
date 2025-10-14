#include<stdio.h>
#include<math.h>
int main( )
{
	float p,r,t,CI;
	printf("Enter p,r,t=");
	scanf("%f,%f,%f",&p,&r,&t);
	CI=p*pow(1+r/100,t)-1;
	printf("\nCompoundInterest CI=%f",CI);
}
