#include<stdio.h>
#include<conio.h>
void main()
{
int first,second,gcd,i;
printf("enter the first number=");
scanf("%d",&first);
printf("\nenter the second number=");
scanf("%d",&second);
for (i=1;i<=first;i++)
{
    if((first%i==0)&&(second%i==0))
    {
        gcd=i;
    }
}
if(gcd==1)
{
    printf("both are co prime");
}
else
{
    printf("both are not co prime");
}
getch();
}