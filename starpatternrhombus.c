#include <stdio.h>  
int main()  
{  
    int n=5;    
    for(int i=1;i<=5;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=5;k++)  
        {  
         if(i==1 || i==5 || k==1 || k==5)
           printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  