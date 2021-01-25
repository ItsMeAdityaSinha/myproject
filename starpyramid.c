#include <stdio.h>
void main()
{

int i,j,num,space;
printf("Enter the number: ");
scanf ("%d",&num);
space=num-1;
for(i=0;i<num;i++)
{
    for(j=0;j<space; j++)
    {
        printf(" ");
    }
    for(j=0;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
    space--;
}
}

