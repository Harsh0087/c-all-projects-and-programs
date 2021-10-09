#include<iostream>
#include<conio.h>
using namespace std;
class bankstatement
{
   private:
   int accnumber;
   char name;
   double amount,deposit,withdraw;
   public:
   void setdata()
   {
       accnumber=111,112,113;
       name='ram','sham','raju';
       amount=1000,10000,100000;
   }
   int accnumber(x);
   double deposit()
   {
       return (amount+deposit);
   }
   double withdraw()
   {
       return (amount-withdraw);
   }
};
int main()
{
    bankstatement b1;
    void setdata();
    cout<<"enter your account number:"<<endl;
    cin>>accnumber();
    return 0;
}