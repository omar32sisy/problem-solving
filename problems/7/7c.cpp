// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int x,y,n,m,a,b;
    cin>>n;
    x=pow(5,n);
    y=x/10;
    
        a=x%10;
        b=y%10;
        
        m=a+b*10;
        
        cout<<m;
        
    
    return 0;
}