#include<stdio.h>
int main()
{
	float f,c;
	printf("enter temperature in fahrenheit");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("%f",c);
	return 0;
}
