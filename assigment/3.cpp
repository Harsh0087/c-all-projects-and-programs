#include <iostream>
#include <conio.h>
using namespace std;
class employ
{
    private:
    int days;
    float rate=15; //rate is salary per day in dollar
    float overtime=16.5;  //overtime is salary per day in dollar
    double grossSalary;
    public:
    double salary()
    {
        cout<<"enter how many days you have worked: "<<endl;
        cin>>days;
        double ts=(days*rate); //ts=salary without overtime
        cout<<"your salary is "<<ts<<endl;
        cout<<"enter how many days you have worked overtime: "<<endl;
        cin>>days;
        double ot=(days*overtime); //ot = salary with over time
        cout<<"your overtime salary is "<<ot<<endl;
        cout<<"your gross salary is "<<ts+ot<<endl;
    }
};
int main()
{
    employ harsh;
    harsh.salary();

return 0;
}