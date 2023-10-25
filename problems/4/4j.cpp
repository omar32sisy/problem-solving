#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int xx=x-1;
    int arr[x], i = 0,p;

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int max = 0,maxx;
    for (int i = 0; i < x; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
            maxx=i;
        }
    }
    int min=999,minn;
    for (int i = 0; i < x; i++)
    {
        
        if (arr[i] <= min)
        {
            min = arr[i];
            minn = i;

        }
        // cout<<arr[i]<<' '<<minn<<' '<<maxx<<' '<<xx<<"\n";
    }
    

    p = xx - minn + maxx;


    if (maxx>minn)
    {
        p--;
    }
    
    cout<<p;






    // for (int i = 0; i < x; i++)
    // {
    //     cout << arr[i];
    // }

    return 0;
}
