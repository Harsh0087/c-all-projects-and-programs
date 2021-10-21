#include <iostream>
#include <conio.h>
using namespace std;
class areaofrectangle
{
    private:
    int l,b;
    public:
    void set( int x, int y)
    {
        l=x;
        b=y;

    }
    int area()
    
    {
        cout<<"enter the value of lenght"<<endl;
        cin>>l;
        cout<<"enter the value of breadth"<<endl;
        cin>>b;
        cout<<"area of rectangle is"<< l*b <<endl;
    }
    
    
};
int main()
{
    areaofrectangle a;
    a.area();

    getch();
return 0;
}