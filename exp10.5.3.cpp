#include<iostream>
#include<conio.h>
using namespace std;
// generation of the fibonacci series using constructor
class fibonacci
{
    int f0,f1,fib;
    public:
    fibonacci()
    {
        f0=0;
        f1=1;
        fib=f0+f1;
    }
    void increment ()
    {
        f0=f1;
        f1=fib;
        fib=f0+f1;
    }
    void display()
    {
        cout<<fib<<"\t";
    }
};
int main() 
{
    fibonacci number;
    cout <<"fibonacci series is \n";
    for (int i=0; i<10;++i)
    {
        number.display();
        number.increment();
    }

getch();
}