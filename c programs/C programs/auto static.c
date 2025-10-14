#include<stdio.h>
void robo()
{
	//auto int a=0;
	static int a=0;
	printf("\n a=%d",a);
	a=a+5;
}
int main()
{   
	robo();
	robo();
	robo();
}
