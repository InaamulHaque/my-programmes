#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float i,n,p;
    printf("Please enter the number of terms you want to find the product of\n");
    scanf("%f", &n);
    p=1;
    for(i=1;i<=n;i++)
    {
        p = p*i;
    }
    printf("%f", p);
    getche ();
    return 0;

}