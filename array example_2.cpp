//DISPLAY STUDENT MARKS OF PPSC by using user input
#include<stdio.h>
int main()
{
	int n,i;
	int student[n];
	
	printf("enter array size:");
	scanf("%d",&n);
	
	printf("enter marks of the students:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&student[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		printf("marks of students is:%d\n",student[i]);
	}
	
	return 0;
}
