#include<iostream>
using namespace std;

class Bank
{
    public:

    string name;
    int Accno;
    char typeofaccount;
    int balance;


    void get_values()
    {
      cout<<"enter the name, accno, type of account(s for savings, c for current), initial balance"<<endl;
      cin>>name>>Accno>>typeofaccount>>balance;
    }
    void deposit()
    {
    
        int money;
        cout<<"enter the amount you want to deposit"<<endl;
        cin>>money;
        balance+=money;
    }

    void withdraw()
    {
       
        int money;
        cout<<"enter the amount you want to withdraw"<<endl;
        cin>>money;
        if (balance-money<0)
            cout<<"Insufficient Balance";
        else
                balance-=money;
        
    }

    void Display()
    {
       
            
     cout<<"Name of the Account holder:"<<name<<endl;
     cout<<"Account number:"<<Accno<<endl;
     cout<<"Type of Account:"<<typeofaccount<<endl;
     cout<<"Current Balance:"<<balance<<endl;
       
    }
};

int main()
{

   int n;
   cout<<"enter the no of bank holders:"<<endl;
   cin>>n;
   Bank arr[n];
   for (int i=0;i<n;i++)
        arr[i].get_values();
    int choice;
    cout<<"1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
    cin>>choice;
    do
    {
           
        if (choice==1)
        {
           int no;
           cout<<"enter your account no"<<endl;
           cin>>no;
           for (int i=0;i<n;i++)
           {
            if (arr[i].Accno==no)
            {
                arr[i].deposit();
            }
           }
        }
        else if (choice==2)
        {
            int no;
        cout<<"enter your account no"<<endl;
        cin>>no;
        for (int i=0;i<n;i++)
        {
            if (arr[i].Accno==no)
            {
                if (arr[i].balance>0)
                {
                    arr[i].withdraw();
                }
            }
        }
        }
        else if (choice==3)
        {
             int no;
        cout<<"enter your account no"<<endl;
        cin>>no;
        for (int i=0;i<n;i++)
        {
            if (arr[i].Accno==no)
            {
               arr[i].Display();
            }
        }
        }

        cout<<"1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
    cin>>choice;

    }while(choice<=3);
}