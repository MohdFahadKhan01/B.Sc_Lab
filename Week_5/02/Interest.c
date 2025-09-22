#include<stdio.h>
#include<math.h>
main()
{
	float si, ci, p, r, amt, t;
	
	printf("Enter the Principle:");
	scanf("%f", &p);
	
	printf("Enter the Rate: ");
	scanf("%f", &r);
	
	printf("Enter the Time: ");
	scanf("%f", &t);
	
r = r/100 ;
si = (p*r*t);
amt = p*(pow((1+r),t));

printf("The Simple Interest = %.2f\n",si);
printf("Amount after %.1f years = %.2f\n\n",t,(si+p));
printf("The Copmpound Interest = %.2f\n",(amt-p));
printf("Amount after %.1f years = %.2f",t,amt);

return 0;

}
