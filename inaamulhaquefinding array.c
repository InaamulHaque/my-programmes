#include<stdio.h>
int main()
{
	int a[7] = {1,2,3,4,5,6,7};
	int i;
	int x;
	int flag = 0;
	printf("Enter the value of the number to find  ");
	scanf("%d", &x);
	for(i=0;i<=6;i++)
	{
		if(x==a[i])
	{
		flag = 1;
		break;
	}
	else
	{
		flag = 0;
	}
}
	if (flag==1)
	printf("Found");
	else
	printf("Not found");
}
