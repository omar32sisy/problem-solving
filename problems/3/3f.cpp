#include <iostream>
using namespace std;

int main()
{

    int x, y, s=1;

    cin >> x >> y;

    for (int i = 0; i < 5 ; i++)
    {
        x = x * 3;
        y = y * 2;

        if (x <= y)
        {
            s = s +1;
        }
    }
    cout << s;

    return 0;
}