#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int a;
	printf("Enter a number\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1 : printf("Salaam\n"); break;
		case 2 : printf("Aadaab\n"); break;
		case 3 : printf("Hello\n"); break;
		default: printf("Incorrect option\n");
		}
	getche ();
	return 0;
}