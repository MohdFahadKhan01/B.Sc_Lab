#include <stdio.h>
main()
{
    int a, b, temp;

    printf("Enter the Numbers :");
    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("Numbers after Interchange : %d, %d",a,b);
    return 0;
}