#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a>b)
	{
		
		if (a>c)
		printf("%d is the largest", a);
		else 
			printf("%d is the largest", c);
	}
 else {
 	if (b>c)
 	
 	printf("%d is the largest", b);
 	else 
			printf("%d is the largest", c);
 }
	getche ();
	return 0;
}
	