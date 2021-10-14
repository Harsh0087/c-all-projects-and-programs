#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n)
{
    if (n<2)
    {
        return 1;
    }
    
    return n*factorial(n-1);
}
int main()
{
    int a;
    cout<<"enter a number:"<<endl;
    cin>>a;
    cout<<"factorail of "<<a<<" is "<<factorial(a);

return 0;
}