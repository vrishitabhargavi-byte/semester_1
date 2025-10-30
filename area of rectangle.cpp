#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter the length:");
	scanf("%f",&length);
	printf("enter breadth value:");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("area of rectangle:%f",area);
	return 0;
}
