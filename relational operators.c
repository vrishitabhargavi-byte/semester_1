#include<stdio.h>
int main(){
	int a;
	int b;
	printf("enter the value of a:");
	scanf("%d",&b);
	printf("enter the value of b:");
	scanf("%d",&b);
	// performing operations on a and b
	printf("assuming a is less than b:%d\n",a<b);
	printf("assuming a is greater than b:%d\n",a>b);
	printf("assuming a is less than or equal to b:%d\n",a<=b);
	printf("assuming a is greater than or equal to b:%d\n",a>=b);
	printf("assuming a is equal to b:%d\n",a=b);
	printf("a is not equal to b:%d\n",a!=b);
	return 0;
}
