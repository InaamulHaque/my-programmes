#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int i, n, r, f;
	printf("Please enter the first term\n");
	scanf("%ld", &f);
	printf("Please enter the number of terms\n");
	scanf("%ld", &n);
	printf("Please enter the common ratio\n");
	scanf("%ld", &r);
	printf("\n");
	for(i=f;i<=pow(f,n);i=i*r)
	{
		printf("%ld\n", i);
	}
	getche ();
	return 0;
}