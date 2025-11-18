#include <stdio.h>

int main()
{
    int a;
    float b;
    char ch;
    char str[101];

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a floating point value: ");
    scanf("%f", &b);

    getchar();

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Enter a string: ");
    scanf("%s", str);

    printf("%d\n%f\n%c\n%s\n", a, b, ch, str);

    return 0;
}

