#include <iostream>
using namespace std;

int main()
{
    int x, a = 0, y, z;
    int arr1, arr2;
    cin >> x;
    while (x--)
    {

        cin >> arr1;

        cin >> arr2;

        if (arr1 == arr2)
        {
            a = a + 1;
        }
    }
    if (a == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 2 + a;
    }

    return 0;
}