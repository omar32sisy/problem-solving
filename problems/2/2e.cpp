#include<iostream>
#include <cmath>
using namespace std;

int main ()
{
   long long a, b, c;

    cin>>a;
    cin>>b;
    cin>>c;

if (a<=c&&b<=c)
{

 cout<< 1;

}
else if (a>c&&b>c)
{
//  cout<< (ceil(a/c))*(ceil(b/c));
// cout<< a * b;
}
else if (a>c&&b<=c)
{
 cout<< (ceil(a/c));
}
else if (a<=c&&b>c)
{
 cout<< (ceil(b/c));
}

   return 0;
}