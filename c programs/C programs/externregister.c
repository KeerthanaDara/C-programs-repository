#include<stdio.h>
extern int a=20; //global variable
void robo()
{
	a=a+5;
}
int main()
{   
    //auto int a=50;
	robo();
	robo();
	robo();
	printf("\n a=%d",a);
}
