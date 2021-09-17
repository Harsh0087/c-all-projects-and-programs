#include<iostream>
#include<conio.h>
using namespace std;
class code
{
    int a,b;
    public:
    code(int i,int j); //parameterized constructor
    void display(void);
}; //end of class definition
code::code(int i, int j) //constructor defination
{
    a=i;
    b=j;
}
void code:: display()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
int main()
{
    code c(5,10); //implicit call to constructor
    c.display();
    code d(3,9); //explicit call to constructor
    d.display();
    getch();
    return 0;
}