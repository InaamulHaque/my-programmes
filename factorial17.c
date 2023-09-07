#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    long int i,n,f;
    printf("Please enter the number you want to find the factorial of\n");
    scanf("%ld", &n);
    f=1;
    for(i=1;i<=n;i++)
    {
        f = f*i;
    }
    printf("\nThe factorial of %ld is %ld", n, f);
    getche ();
    return 0;

}