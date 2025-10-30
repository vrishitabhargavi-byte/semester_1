#include<stdio.h>
int main()
{
	int num,sum=0,rem,temp;
	sum=0;
	printf("enter a 5 digit number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum+=(rem*rem*rem);
		num=num/10;
	}
	if(sum==temp)
	{
		printf("the num is armstrong");
	}
	else{
		printf("the um is not armstong");
	}
	return 0;
}
