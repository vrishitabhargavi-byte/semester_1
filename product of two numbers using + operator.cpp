#include<stdio.h>
int main()
{
	int a,b,i,result=0;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
		result = result + a;
	}
	printf("product = %d\n",result);
	return 0;
}
