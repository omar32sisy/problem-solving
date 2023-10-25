#include <iostream>
using namespace std;

int main()
{

    int x, y, z, n, s=0;
    
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        

        if ((x+y+z==2)||x+y+z==3)
        {
            s = s+1;

        }


    }
    cout<<s;

    return 0;
}