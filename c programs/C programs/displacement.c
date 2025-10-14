#include <stdio.h>
int main( )
{
	float s,u,a,t;
	printf("Enter u,a,t=");
	scanf("%f%f%f", &u,&a,&t);
	s=u*t+0.5*a*t*t;
	printf("\nDis d=%f",s); 
}
