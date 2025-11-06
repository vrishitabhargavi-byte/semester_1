//Write a c program to find sum of elements in an array
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	int A[n];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		sum+=A[i];
	}
	printf("sum of array elements = %d\n",sum);
	return 0;
}
