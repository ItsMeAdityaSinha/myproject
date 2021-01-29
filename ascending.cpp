#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter 1st number"<<endl;
cin>>a;
cout<<"enter 2nd number"<<endl;
cin>>b;
cout<<"enter 3rd number"<<endl;
cin>>c;
if( c<b<a )
{
    cout<<"Ascending order is"<<c<<";"<<b<<";"<<a<<endl;
}
else if( b<c<a ) 
{
    cout<<"Ascending order is"<<b<<";"<<c<<";"<<a<<endl;
}
else if ( c<a<b )
{
    cout<<"Ascending order is"<<c<<";"<<a<<";"<<b<<endl;
}
else if ( a<c<b )
{
    cout<<"Ascending order is"<<a<<";"<<c<<";"<<b<<endl;
}
else if ( a<b<c)
{
    cout<<"Ascending order is"<<a<<";"<<b<<";"<<c<<endl;
}
else if ( b<a<c)
{
    cout<<"Ascending order is"<<b<<";"<<a<<";"<<c<<endl;
}
  
}