#include <stdio.h>
#include <math.h>
int main()
{
    double area, peri, n1, n2, n3;
    int choice;

    printf("Choose one Shape :\n1 for - Rectangle\n2 for - Circle\n3 for - Triangle\n4 for - Cube\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Length and Width of Rectangle :");
        scanf("%lf%lf", &n1, &n2);
        area = n1 * n2;
        peri = 2 * (n1 + n2);
    }
    else if (choice == 2)
    {
        printf("Enter Radius of circle :");
        scanf("%lf", &n1);
        area = 3.1415 * n1 * n1;
        peri = 2 * 3.14 * n1;
    }
    else if (choice == 3)
    {
        printf("Enter the 3 sides of triangle :");
        scanf("%lf%lf%lf", &n1, &n2, &n3);

        if (n1 > (n2 + n3) || n2 > (n1 + n3) || n3 > (n1 + n2))
        {
            printf("No triangle is formed");
        }
        else
        {
            double s = (n1 + n2 + n3) / 2;
            area = sqrt((s * (s - n1) * (s - n2) * (s - n3)));
            peri = n1 + n2 + n3;
        }
    }
    else if (choice == 4)
    {
        printf("Enter the side of cube :");
        scanf("%lf", &n1);
        area = 6 * n1 * n1;
        peri = 12 * n1;
    }
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", peri);

    return 0;
}
