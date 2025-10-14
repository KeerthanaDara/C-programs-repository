#include<stdio.h>
void swap(int a,int b); //Function prototype
int main()
{
	int x,y;
	printf("Enter x,y values:");
	scanf("%d%d",&x,&y);
	printf("\n before swapping in main x=%d\ty=%d",x,y);
	swap(x,y); //Function call
	printf("\n After swapping in main x=%d\ty=%d",x,y);
	return 0;
}
void swap(int a,int b) //Function Definition
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nInside function x=%d\t y=%d",a,b);
}
