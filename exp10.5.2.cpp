#include <iostream>
#include <conio.h>
using namespace std;
class factorial
{
    private:
    int fact;

public:
    factorial(int x) //parameterized constructors
    {
        fact = x;
    }
    int compute_fact(int);
};
int factorial ::compute_fact(int x)
{
    int i;
    for ( i = 1; i <= x; i++)
    {
        fact = fact *i;
    }
    
}
int main()
{
    factorial obj(1); //implicit call to constructor
    int n;
    cout << "\nEnter the number:";
    cin >> n;
    if (n > 0)
    {
        cout << n << "!=1";
    }
    else if (n == 0)
    {
        cout << n << "!=1";
    }
    else
    {
        cout << "number should be positive";
    }

    getch();
}