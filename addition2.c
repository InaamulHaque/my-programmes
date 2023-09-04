#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf("Please enter the first number\n" );
	scanf("%d", &a);
	printf("Please enter the second number\n");
	scanf("%d", &b);
	c = a+b;
	printf("Addition of the numbers is %d\n", c);
	getche ();
	return 0;
}