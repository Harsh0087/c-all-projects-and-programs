#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a = 3;
    int* b=&a;

    cout<<"address of a is "<<b<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"value at b is "<<a<<endl;
    cout<<"value at b is "<<*b<<endl;

    int**c=&b;
    cout<<"address of b is "<<&b<<endl;
    cout<<"address of b is "<<c<<endl;
    cout<<"value of b is "<<*c<<endl;
    cout<<"value of value  of b is "<<**c<<endl;
return 0;

}