#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n, a, b,c, x,y;
    int i,j;
    int arr[i][j];
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                x=i;
                y=j;
            }
            
        }
        
    }
    cout << abs(x-2)+abs(y-2);



    return 0;
}