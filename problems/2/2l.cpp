#include<iostream>
#include <cmath>
using namespace std;

int main ()
{
   int a;

    cin>>a;
    
if (a>=90)
{
 cout<< "expert";
}
else if (a<40)
{
    cout<< 40-a;
}
else if (a<70&&a>=40)
{
    cout<< 70-a;
}
else if (a<90&&a>=70)
{
    cout<< 90-a;
}



   return 0;
}