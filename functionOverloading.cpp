#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a, int b)
{
    return (a+b);
}
int sum(int a,int b, int c)
{
    return (a+b+c);
}
//volume of cylinder
double volume(float r,int h)
{
    return (3.14*r*r*h);
}
//volume of cuboid
double volume(int l,int h,int b)
{
    return (b*l*h);
}
//volume of cube
double volume(float s)
{
    return (s*s*s);
}
int main()
{
    cout<<"sum of 3and 6 is :"<<sum(3,6)<<endl;
    cout<<"sum of 3,7and 6 is :"<<sum(3,7,6)<<endl;
    cout<<"vol of cylinder is radius=3 and height=6 is :"<<volume(3,6)<<endl;
    cout<<"vol of cuboid of lenght=3 breadth=7 height=6 is :"<<volume(3,7,6)<<endl;
    cout<<"vol of cube of side 3 is :"<<volume(3)<<endl;
return 0;
}