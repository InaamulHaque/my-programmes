#include<stdio.h>
#include<conio.h>
int main()
{
	long int p, q, r;
	printf("Please enter the number of rows\n ");
	scanf("%ld", &q);
	for(p=0;p<=q;p=p+1)
	{
		for(r=1;r<=p;r++)
		{
			printf("*");
		}
			printf("\n");
	}
	getche ();
	return 0;
}