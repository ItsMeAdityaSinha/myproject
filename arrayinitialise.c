#include<stdio.h>
void main()
{
    int i,sum=0;
    int arr[10]={2,3,4,5,6,7,8,9,1,2};    
    for(i=0;i<=10;i++)
    {
        sum=sum+arr[i];
    }
     printf("%d ",sum);
 
}