#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int i, d, n, f;
	printf("Please enter the first term\n");
	scanf("%ld", &f);
	printf("Please enter the common difference\n");
	scanf("%ld", &d);
	printf("Please enter the number of terms to be displayed\n");
	scanf("%ld", &n);
	printf("\n");
	for(i=f;i<=(f + (n-1)*d);i=i+d)
	{
		printf("%ld\n", i);
	}
	getche ();
	return 0;
}