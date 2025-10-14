#include<stdio.h>
int main()
{
	int n, sum=0;
	printf("Enter size of the Array:");
	scanf("%d",&n);
	int i,arr[n];
	printf("\nEnter the Elements of the Array:");
	for (i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	//print the elements
	for (i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}
