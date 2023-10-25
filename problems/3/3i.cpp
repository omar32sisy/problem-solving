#include <iostream>
using namespace std;
int main()
{

    int x, i = 0, j = 0, n = 0, k = 0, l;

    cin >> x;
    l = x;
    do
    {
        i = i + 1;
        j = j + i;
        x = x - j;
        n = n + 1;
        k = k + j;
    } while (x > 0);

    if (k == l)
        cout << n;
    else
    {
        cout << n - 1;
    }

    return 0;
}