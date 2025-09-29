#include <stdio.h>
main()
{
    char alpha;
    printf("Enter an alphabet :");
    scanf("%c", &alpha);
	
	if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122) )
	{
	
    	if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
        	printf("It is vowel");
        
    	else
        	printf("It is consonant");
	}
	else
		printf("It is not an alphabet");
}
