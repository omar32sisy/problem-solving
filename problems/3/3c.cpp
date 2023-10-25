#include <iostream>
using namespace std;

int main()
{

    int x=0, y, z, n;
    
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>y;
        cin>>z;

        if (z-y>=2)
        {
            x = x+1;

        }


    }
    cout<<x;

    return 0;
}