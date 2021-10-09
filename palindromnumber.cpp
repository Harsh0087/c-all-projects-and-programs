#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number,r=0,temp,sum=0;
    cout<<"enter the number:"<<endl;
    cin>>number;
    temp=number;
    while (number>0)
    {
        r=number%10;
        sum=(sum * 10)+r;
        number=number/10;
    }
if (temp==sum)
{
    cout<<"it is a palindrom number.";
}
else
{
cout<<"it is not a palindrom number.";
}

    
    return 0;
}