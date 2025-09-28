#include <stdio.h>
main()
{
    char alpha;
    printf("Enter an alphabet :");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        printf("It is vowel");
    else
        printf("It is consonant");
}