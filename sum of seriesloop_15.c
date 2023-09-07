#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,i,sum;
    sum = 0;
    printf("Please enter the number of terms you want to sum\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum +i;
    }
printf("%d", sum);
getche ();
return 0;
}