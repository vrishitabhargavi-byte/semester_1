#include<stdio.h>
int main()
{
	int num,rev,rem, temp;
	printf("enter a 5 digit number:");
	scanf("%d",&num);
	temp = num;
	rev = 0;
	while(num!=0)
	{
		rem = num %10;
		rev = rev*10 + rem;
		num = num/10;
	}
	if(temp == rev){
		printf("palindrome");
	}
	else{
		printf("not a palindrome");
	}
	return 0;
}

