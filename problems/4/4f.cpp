#include <iostream>
using namespace std;

int main()
{
    int x, a = 0, y;
    cin >> x;
    while (x>0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < n)
            {
                a = a + 1;
            }
        }
        int ar[100];
        ar[y]=a;
        y=y+1;
        for (int i = 0; i < 5; i++)
        {
            cout << ar[i];
        }
        

        x=x-1;
    }

    return 0;
}