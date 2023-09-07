#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,n;
	printf("Enter the number of terms you want to display\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n", i);
	}
	getche ();
	return 0;
}