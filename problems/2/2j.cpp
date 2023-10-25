#include<iostream>
#include <cmath>
using namespace std;

int main ()
{
   int a, b, c;

    cin>>a;
    cin>>b;
    cin>>c;
    
if (a==b&&c==0)
{
 cout<< "Aoki";
}
else if (a==b&&c==1)
{
    cout<< "Takahashi";
}
else if (a>b)
{
    cout<< "Takahashi";
}
else if (a<b)
{
    cout<< "Aoki";
}



   return 0;
}