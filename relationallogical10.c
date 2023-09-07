#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	float d,a,b,c;
	printf("Please enter the values of a,b,c\n");
	scanf("%f%f%f", &a, &b, &c);
	d = pow(b,2) - 4*a*c;
	if(d!=0)
	{
		printf("The roots are not equal");
	}
	else
	{
		printf("The roots are equal");
	}
	getche ();
	return 0;
}