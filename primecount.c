#include<stdio.h>
void main()
{
    int a,b,c=0,d=0;
    printf("Prime numbers between 1 to 100 are");
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=a;b++)
        {
            if(a%b==0)
         c++;
        }
        if(c==2)
        {
            printf("%d ",a);
            d++;
        }
        c=0;
    }
    printf("\nThe count of those numbers are :%d",d);
}