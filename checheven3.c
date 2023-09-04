#include<stdio.h>
#include<conio.h>
int main ()
{
	int a;
	printf("Please enter the number you want to check\n");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number id odd");
	}
	getche ();
	return 0;
	
}