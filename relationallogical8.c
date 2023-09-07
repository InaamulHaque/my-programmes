#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	float a,b,c;
	printf("Enter three numbers\n");
	scanf("%f%f%f", &a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("%f is the largest", a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%f is the largest", b);
	}
	else 
	{
		printf("%f is the largest", c);
}
	getche ();
	return 0;
}
