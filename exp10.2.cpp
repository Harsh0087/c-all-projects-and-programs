#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
class employee
{
    char name[20];
    int basic; //basic pay
    int hra; //house rent allowance
    public:
    employee() //default constructor
    {
        strcpy (name , "Mr.Harshpreet Singh");
        basic =10000000;
        hra=5000000;
    }
    void showdata();
};
void employee::showdata()
{
    cout<<"employee name:"<<name<<endl;
    cout<<"basic pay:"<<basic<<endl;
    cout<<"hra:"<<hra<<endl;
}
int main()
{
    employee emp;
    emp.showdata();
    getch();
    return 0;
}