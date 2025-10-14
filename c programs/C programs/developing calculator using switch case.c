#include <stdio.h>
int main()
{
	char op;
	int f,s;
	printf("Enter an operator=");
	scanf("%c",&op);
	printf("\n Enter two operands:");
	scanf("%d%d",&f,&s);
	switch(op)
	{
		case'+':
			printf("\nSUM=%d",f+s);
			break;
		case'-':
			printf("\nDIFF=%d",f-s);
			break;
		case'*':
			printf("\nMUL=%d",f*s);
			break;
		default:
			printf("\nInvalid");
	}
	printf("\nEND");
	return 0;
}
