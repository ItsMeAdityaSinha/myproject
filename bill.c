#include <stdio.h>
#include<conio.h>

int main()
{
    int n;
	printf("Enter the Number : ");
	scanf("%d",&n);

	if(n>80)
	{
		printf("First\n");
	}
	else if((n>=60) && (n<=80))
	{
		printf("Second\n");
	}
	else if((n>=40) && (n<=60))
	{
		printf("Third\n");
	}
	else if((n>=30) && (n<=60))
	{
		printf("pass\n");
	}
	else
	{
		printf("Fail\n");
	}
    return 0;
}