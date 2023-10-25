#include<iostream>
using namespace std;

int main()
{

    int a, b, c, e, f, d, n;
    cin>>a;
     
    n=a/100;
    b=a%100;
    
    n=n+b/20;
    c=b%20;
    
    n=n+c/10;
    d=c%10;
    
    n=n+d/5;
    e=d%5;
    
    n=n+e;

    cout<< n;


    return 0;
}

    // b=a%100;//25
    // if (b==0)
    // {
    //     n=a/100; 
    // }
    // else
    // {
    //     n=a/100;
    // }
    
    // c=b%20;
    // if (c==0)
    // {
    //     n=n+(b/20);
    // }
    // else
    // d=c%10;
    // if (d==0)
    // {
    //     n=n+(c/10);
    // }e=d%5;
    // if (e==0)
    // {
    //     n=n+(d/5);
    // }f=e%1;
    // if (f==0)
    // {
    //     n=n+(e);
    // }