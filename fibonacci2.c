#include<stdio.h>
void main()
{
    int i,a=0,b=1,c; 
    printf("%d ",a);
    printf("%d ",b);
    for(i=1;i<=5;i++)
    {
        c=a+b;
        printf(",%d",c);
        a=b;
        b=c;
    }
}
