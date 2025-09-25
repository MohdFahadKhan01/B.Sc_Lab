#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle :");
    scanf("%d %d %d",&a,&b,&c);

    if (a >=(b + c) || b >= (a + c) || c >= (a + b))
        printf("No triangle is formed");

    else if ((a*a)==((b*b)+(c*c)))
        printf("A right angled triangle is formed");

    else if ((a*a)>((b*b)+(c*c)))
        printf("A obtuse angled triangle is formed");

    else if ((a*a)<((b*b)+(c*c)))
        printf("A acute angled triangle is formed");

    return 0;

}