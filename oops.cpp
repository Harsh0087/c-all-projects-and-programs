#include <iostream>
#include <conio.h>
using namespace std;
class employ
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void employ :: setData(int a1, int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employ harsh;
    harsh.d=4;
    harsh.e=5;
    harsh.setData(1,2,3);
    harsh.getData();

    return 0;
}