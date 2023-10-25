#include<iostream>
using namespace std;
int main ()
{
    int n,ans,a,b,res;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        ans = ans * 5;
    }
    
    
        a=ans%10;
        b=(ans/10)%10;


        res=a+b*10;

        cout << res;   
    
    

    return 0;
}