#include<stdio.h>
int main()
{
	int i,low,mid,high,n,found=0,key,arr[50];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements in sorted order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==arr[mid])
		{
			printf("element found at index %d\n",mid);
			found=1;
			break;
		}
		else if(key<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(!found){
		printf("element not found in the array.\n");
	}
	return 0;
}
