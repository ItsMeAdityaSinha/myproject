#include <stdio.h>

int main()
{
    int a,even=0,odd=0,r;
    printf("Enter the integer =");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        if(r%2==0)
        {
                even=even+1;
        }
        else
        {
                odd=odd+1;

        }
        a=a/10;
    }
        printf("The even digits are :%d\n",even);
        printf("The odd integers are :%d",odd);
}

