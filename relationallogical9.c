#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int a;
	printf("Please enter your age\n");
	scanf("%d", &a);
	if((a<18)||(a>70))
	{
		printf("You aint eligible for driving" );
	}
	
	else
	{
		printf("You are eligible for driving");
	}
	getche ();
	return 0;
}
