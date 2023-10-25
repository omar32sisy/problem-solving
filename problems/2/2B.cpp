#include<iostream>
using namespace std;
int main ()
{
    int a, b, c, sum, sub,mul;

    cin>>a;
    cin>>b;
    

    sum=a+b;
    sub=a-b;
    mul=a*b;

if (sum>=sub&&sum>=mul)
{

 cout<< sum;

}
else if (sub>=sum&&sub>=mul)
{

 cout<< sub;

}
else if (mul>=sum&&mul>=sub)

{
    cout<< mul;
}

   return 0;
}