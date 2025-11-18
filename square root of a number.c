//Write a c program to find square root of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	float result;
	printf("enter a number:");
	scanf("%d",&num);
	result = sqrt(num); //using sqrt function from math.h header file
	printf("%f",result);
	return 0;
}
