#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b;
	printf("Please enter two numbers\n");
	scanf("%d%d", &a,&b);
	if(a>b)
	{
		printf("%d is larger",a);
	}
	else if(a<b)
	{
		printf("%d is larger",b);
	}
	else
	{
		printf("The numbers are equal");
	}
     getche ();
     return 0;
	
}