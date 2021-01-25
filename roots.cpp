#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

    float a,b,c,x1,x2,d,rp,ip;
    cout<<"Enter coefficients a, b and c:";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    cout<<d;
    if (d > 0) 
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real "<<endl;
    }
    
    else if (d == 0) 
    {
        cout << "Roots are equal"<<endl;
        x1=-b/(2*a);
    }

    else 
    {
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        cout<<"Roots are imaginary"<<endl;
    }

    return 0;
}