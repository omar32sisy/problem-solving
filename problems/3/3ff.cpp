#include <iostream>
using namespace std;

int main()
{

    int x, y, s = 0;

    cin >> x >> y;

    do
    {
        x = x * 3;
        y = y * 2;
        s=s+1;

    } while (x <= y);

    
    cout << s;

    return 0;
}