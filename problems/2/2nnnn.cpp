#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if ((a == 'R' && b == 'R' && c != 'R') || (b == 'R' && c == 'R' && a != 'R'))
    {
        cout << 2;
    }

    else if (((a == 'R' && b != 'R' && c != 'R') || (a != 'R' && b == 'R' && c != 'R') || (a != 'R' && b != 'R' && c == 'R') || b == 'S'))
    {
        cout << 1;
    }
    else if ((a == 'R' && b == 'R' && c == 'R'))
    {
        cout << 3;
    }
    else if ((a != 'R' && b != 'R' && c != 'R'))
    {
        cout << 0;
    }

    return 0;
}