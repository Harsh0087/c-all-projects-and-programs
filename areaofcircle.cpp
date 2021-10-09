#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
    private:
    double r;
    public:


void input()
{
    cout << "enter a radius of circle=";
    cin >>r;
}
void area()
{
    double ar=3.14*r*r;
    cout <<"area of circle="<<ar;
}void circumference()
{
    double cir=2*3.14*r;
    cout <<"\n circumference of circle ="<<cir;
}
};
int main()
{
    circle c1;
    c1.input();
    c1.area();
    c1.circumference();
    getch();
    return 0;
}