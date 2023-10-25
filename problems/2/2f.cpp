#include<iostream>
#include <cmath>
using namespace std;

int main ()
{
   int a, x;

    cin>>a;
    
    x=(a%10)*100+((a/10)%10)*10+(a/100);

if (a==x)
{

 cout<< "Yes";

}

else
{
 cout<< "No";
}

   return 0;
}