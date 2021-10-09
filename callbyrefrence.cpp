#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
//this will not swap values
// int swap(int a,int b)
// {                       //temp a b
//     int temp=a;        //   4  4 5
//      a=b;          //    4  5 5
//      b=temp;      //     4  5 4
// }
//this will swap values call by refrence with  pointers
int swappointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int & swapRefrenceVar(int & a,int & b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main()
{
    int x=4;  int y=5;
    // cout<<"sum of 4 and 5 is :"<<sum(a,b);
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;
    // swap(x,y);//this will not work
    // swappointer( &x,&y);//this will work using pointer refrence 
    swapRefrenceVar(x,y)=755;//this will work using refrence variable
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;
return 0;
}