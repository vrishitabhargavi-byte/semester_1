#include<stdio.h>
int main(){
	int a=20,b=5;
	printf("assigns a value to b:%d\n",a=b);
	printf("add b value to a and stores in a:%d\n",a+=b);
	printf("subtracts b value from a and stores in a:%d\n",a-=b);
	printf("multiplies b value with a and assigns to a:%d\n",a*=b);
	printf("done division and quotient stores in a:%d\n",a/=b);
	printf("done division and stores remainder in a:%d\n",a%=b);
	return 0;
}
