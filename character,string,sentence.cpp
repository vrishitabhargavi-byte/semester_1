#include<stdio.h>
int main()
{
	char grade ;
	char name[10];
	char sen[20];
	printf("enter grade");
	scanf("%c",&grade);
	printf("enter name");
	scanf("%s",name);
	getchar();
	printf("enter sentence");
	scanf("%[^\n]",sen);
	printf("%c\n%s\n%s",grade,name,sen);
	return 0;
}
