#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int marks[4] = {24, 89, 76, 90};
    // for loop
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the marks of "<<i <<"is "<<marks[i]<<endl;
    // }

    // while loop
    // int i = 0;
    // while (i < 4)
    // {
    //     cout << "the marks of " << i << "is " << marks[i] << endl;
    //     i++;
    // }
    // do while loop
        int i =0;
    do
    {
        cout << "the marks of " << i << "is " << marks[i] << endl;
        i++;
        if (i ==2)
        {
            continue;
        }

    } while (i<4);
    
    return 0;
}