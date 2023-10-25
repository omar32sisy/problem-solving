#include <iostream>
using namespace std;

int main()
{
    int hr, a, b, x = 0, y = 0, z;
    cin >> hr;
    int arr[hr - 1];
    for (int i = 0; i < hr - 1; i++)
    {
        cin >> arr[i];
    }
    cin >> a >> b;
    for (int i = 0; i < hr - 1; i++)
    {
        cout << arr[i];
    }
    cout << "\n";


    for (int j = 0; j < b - a; j++)
    {
        y=a-1;
        a=a+1;
        x = x + arr[y];
        // y = y + 1;
    }
    cout << x;

    return 0;
}