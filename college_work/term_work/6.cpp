#include<iostream>
using namespace std;

class Invoice
{
    string partnumber;
    string partDescription;
    int quantity;
    double price;

    public:

    Invoice(string s1,string s2, int a,double b)
    {
        partnumber=s1;
        partDescription=s2;
        quantity=a;
        price=b;

    }
    string get_partnumber()
    {
        return partnumber; 
    }
    string get_partDescription()
    {
        return partDescription;
    }
    int get_quantity()
    {
        return quantity;
    }
    int get_price()
    {
        return price;
    }
    void set_partnumber()
    {
        string p;
        cout<<"enter the partnumber:"<<endl;
        cin>>p;
        partnumber=p;
    }

    void set_partDescription()
    {
        string p;
        cout<<"enter the partDescription:"<<endl;
        cin>>p;
        partDescription=p;
    }

    void set_quantity()
    {
        int p;
        cout<<"enter the partnumber:"<<endl;
        cin>>p;
        quantity=p;
    }

    void set_price()
    {
        int p;
        cout<<"enter the partnumber:"<<endl;
        cin>>p;
        price=p;
    }

    double getInvoiceAmount()
    {
        if (price<0)
            price=0.0;
        if (quantity<0)
            quantity=0;
          return quantity*price;
    }
};

int main()
{
     Invoice Invoicetest("12","Bottle",12,100.0);
     cout<<"Total price:"<<Invoicetest.getInvoiceAmount()<<endl;
     Invoicetest.set_partDescription();

}