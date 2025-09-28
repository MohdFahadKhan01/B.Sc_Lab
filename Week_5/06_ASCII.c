#include <stdio.h>
int main()
{
    char c;
    int a;

    printf("Enter a character :");
    scanf("%c", &c);
    a = c;

    printf("The ASCII value of %c is : %d", c, a);
}