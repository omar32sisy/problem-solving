#include<iostream>
using namespace std;

int main()
{
    int n,x=0,a=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        x=x+1;
        a=a+x;
    }
    
    cout<<a;

    return 0;
}