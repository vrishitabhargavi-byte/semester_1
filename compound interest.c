#include<stdio.h>
#include<math.h>
int main()
{
	float p=5900;
	float t=2;
	float r=2;
	float ci = p * (pow(1 + (r / 100), t) -1);
	printf("Compound interest is: %f\n",ci);
	return 0;
}
