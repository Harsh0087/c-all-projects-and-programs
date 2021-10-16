#include <iostream>
#include <conio.h>
using namespace std;
class binary
{
    string b;
    public:
    void read(void);
    void chk_bianry(void);
    void display();
    void onescompliment();
};
void binary :: read()
{
    cout<<"enter a number : "<<endl;
    cin>>b;
}
void binary :: chk_bianry()
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i)==0)
        {
            b.at(i)=1;
        }
        
    }
    
}
int main()
{
    binary s;
    s.read();
    s.chk_bianry();


return 0;
}