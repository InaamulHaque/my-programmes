#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,n;
	printf("Please enter the number of terms of which the sum is to be found\n");
	scanf("%d", &n);
	i =(n*(n+1))/2;
	printf("%d",i);
	getche ();
	return 0;
}