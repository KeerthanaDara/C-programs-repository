#include<stdio.h>
union Book
{
	char Title[20];
	int pages;
	float price;
};
void main()
{
	union Book B1;
	union Book B2={"computerscience",25,250.0};
	printf("Enter Book1 Details using struct:Title pages price AN:\n");
	scanf("%s%d%f", B1.Title,&B1.pages,&B1.price);
	printf("%s,%d,%f\n",B1.Title,B1.pages,B1.price);
	printf("\nBook2 Details are using struct :\n");
	printf("%s %d %f",B2.Title,B2.pages,B2.price);
}
