#include<iostream>
using namespace std;
int main ()
{
    int a, b, c, sum, sub,mul;

    cin>>a;
    cin>>b;
    

if (a>0&&b==0)
{

 cout<< "Gold";

}
else if (b>0&&a==0)
{

 cout<< "Silver";

}
else if (a>0&&b>0)

{
    cout<< "Alloy";
}

   return 0;
}