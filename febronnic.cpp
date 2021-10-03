#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3, number;
    cout << "enter a number:" << endl;
    cin >> number;
    for (int i = 0; i < number; ++i)
    {
        n3 = n1 + n2;
        cout << n3 << endl;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}