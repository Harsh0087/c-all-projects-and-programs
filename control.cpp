#include <iostream>
using namespace std;

int main()
{
    //selection control
    int age;
    cout << "tell me your age?";
    cin >> age;

    //if else ladder
    // if (age<18)
    // {
    //     cout<<"you cannot come to my party.";
    // }
    // else if(age==18)
    // {
    //     cout<<"you can come to my party and get kid pass.";
    // }
    // else{
    //     cout<<"you are welcome to my party..";
    // }

    //switch case
    switch (age)
    {
    case 18:

        cout << "your age is 18.";
        break;
        {
        case 22:
            cout << "your age is 22.";
            break;

        case 2:
            cout << "your age is 2.";
            break;

        default:
            cout << "no special case.";
            break;
        }
        return 0;
    }
}
