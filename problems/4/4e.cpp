#include <iostream>
using namespace std;

int main()
{
    int n, a=0, g;
    cin >> n;
    int arr[n];
    cin>>g;
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            /* code */
        }
        
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
        if (arr[i]>=0)
        {
            a=a+1;
        }
        
    }
    cout<< a;

    return 0;
}