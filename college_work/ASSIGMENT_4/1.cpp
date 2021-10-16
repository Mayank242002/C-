#include<iostream>
using namespace std;

class employee{
    public:

    long int Pan;
    string name;
    long unsigned int Taxincome;
    long unsigned int Tax=0;

    
      
      void inputInfo(long int p,string n,long unsigned int ti)
      {
         Pan=p;
         name=n;
         Taxincome=ti;
   
      }

      void TaxCal()
      {
          if (Taxincome>250000 && Taxincome<=300000)
              Tax=0.10*(Taxincome-25000);
          else if (Taxincome>300000 && Taxincome<=400000)
           Tax=5000+0.20*(Taxincome-30000);
          else if (Taxincome>400000)
           Tax=25000+0.30*(Taxincome-40000);


      }

      void Displayinfo()
      {
          cout<<name<<" with income "<<Taxincome<<" has Tax "<<Tax<<endl;

      }
 
};

int main()
{
   class employee e;
   e.inputInfo(12131312,"Mayank",300000);
   e.TaxCal();
   e.Displayinfo();

}