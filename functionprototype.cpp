#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void harsh();
int main()
{
    int num1, num2;
    harsh();
    cout << "\nenter num1" << endl;
    cin >> num1;
    cout << "enter num2" << endl;
    cin >> num2;
    cout << "sum of num1 and num2 is " << sum(num1, num2);
    return 0;
}
//this is call function prototype.
void harsh()
{
    cout << "hello world";
}