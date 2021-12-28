#include<iostream>
using namespace std;

class SavingsAccount
{
   int savingsBalance;
   public:

   SavingsAccount(int a)
   {
       savingsBalance=a;
   }
   void set_savingbalance(int a)
   {
       savingsBalance=a;
   }

   static int annualInterestRate;

   int calculateMonthlyInterest()
   {
      savingsBalance+=(savingsBalance*annualInterestRate)/12;
      return (savingsBalance*annualInterestRate)/12;
   }

   static void modifyInterestRate()
   {
      int new1;
      cout<<"enter the new value of the Interest"<<endl;
      cin>>new1;
      annualInterestRate=new1;
   }

   void display()
   {
       cout<<"Total Saving Balance:"<<savingsBalance<<endl;
   }
};

int SavingsAccount::annualInterestRate=4;

int main()
{
  SavingsAccount s1(2000);
  SavingsAccount s2(3000);
  s1.calculateMonthlyInterest();
  s2.calculateMonthlyInterest();
  s1.display();
  s2.display();
  s1.modifyInterestRate();
  s1.calculateMonthlyInterest();
  s2.calculateMonthlyInterest();
  s1.display();
  s2.display();
}