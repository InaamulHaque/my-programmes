#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,k,x,r;
	printf("Please enter the number of rows ");
	scanf("%d", &r);
	x=1;
	for(j=r;j>=1;j--)
	{
	for(i=1;i<=j-1;i++)
	{
		printf(" ");
	}
	for(k=1;k<=x;k++)
	{
		printf("*");
	}
	x++;
	printf("\n");
}
getche ();
return 0;
}
