#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
 	int a,b;
printf("Please enter two numbers\n");
	scanf("%d%d", &a,&b);

if(a==b)
{
	printf("The numbers are equal");
}
else
	a>b?printf("%d is larger", a) : printf("%d is larger", b);

	getche ();
	return 0;
}