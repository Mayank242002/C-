#include <iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cout<<"enter the number :=>";
   cin>>n;
   int rem=0,small=INT_MAX;
   while (n>0)
   {
       rem=n%10;
       n=n/10;
       small=min(small,rem);
   }

   cout<<"smallest digit "<<small<<endl;
}