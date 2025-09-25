#include <stdio.h>
main()
{
    int a, b;

    printf("Enter the Numbers :");
    scanf("%d%d", &a, &b);

    a= a+b;
    b= a-b;
    a = a-b;

    printf("Numbers after Interchange : %d, %d",a,b);
    return 0;
}