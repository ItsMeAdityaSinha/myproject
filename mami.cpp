#include<iostream>
using namespace std;
int main()
{
    int factorial=0;
    cout<<"Enter a number";
    cin>>factorial;
    int zerocount=0;
    for(int five=5;five<=factorial;five*=5)
    {
        zerocount+=factorial/five;
    }
    cout<<"Zeroes of"<<factorial;
    cout<<"Factorial is"<<zerocount<<endl;
}
