#include <iostream>
using namespace std;
 
int main()
{
    int x, y;
    cout<<"Enter the first number you want to enter=";
    cin>>x;
    cout<<"Enter the second number you want to enter=";
    cin>>y;
    cout<<"Original number"<<endl;
    cout<<"x="<<x<<",y="<<y<<endl;
    x=x+y; 
    y=x-y; 
    x=x-y; 
    cout<<"After Swapping the value of x ="<<x<<",y="<<y;
}
 