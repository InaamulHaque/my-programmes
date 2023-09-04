#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	float d,a,b,c,p,q,r;
	printf("Please enter the values of a,b,c\n");
	scanf("%f%f%f", &a,&b,&c);
	d=(b*b) - (4*a*c);
	r= (-b)/(2*a);
		p= ((-b) - sqrt(d))/(2*a);
		q= ((-b) + sqrt(d))/(2*a);
		
	
	
	
	if(d<0)
		printf("The roots are imaginary");
	else if(d==0)
		printf("The roots are equal with value %f",r);
	 else
	printf("The roots are real and different with values %f   %f", p,q  );
	getche ();
	return 0;
	
	
}