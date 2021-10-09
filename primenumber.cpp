#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number, m = 0, i, fault = 0;
    cout << "enter the number:" << endl;
    cin >> number;
    m = number / 2;
    for (i = 2; i <= m; i++)
    {

        if (number % i == 0)
        {
            cout << "not prime";
            fault = 1;
            break;
        }
    }
    if (fault == 0)
    {

        cout << "prime";
    }
    

    return 0;
}