//with return and without parameter
#include<stdio.h>
int add()
{
	int a=5,b=7;
	return a+b;
}
int main()
{
	int sum;
	sum = add();
	printf("%d",sum);
}
