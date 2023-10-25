#include <iostream>
using namespace std;

int main()
{
    int v, t1, t2, d;

    cin >> v;
    cin >> t1;
    cin >> t2;
    cin >> d;

    if (((d / v) < t1) || ((d / v) > t2))//((d / v) >= t1) || ((d / v) <= t2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}