#include<stdio.h>
int main()
{
	int i,n,a[10],index;
	printf("enter the n value:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nenter index to update");
	scanf("%d",&index);
	if(index>=0 && index<n)
	{
	a[index]=9;	
	}
else
	{
		printf("invalid index\n");
	}
	printf("updated array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	}

