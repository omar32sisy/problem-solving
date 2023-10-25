#include <iostream>
using namespace std;

int main()
{

    int x = 0, z, n;
    char a,b,c,d,e;

    cin >> n;


    for (int i = 0; i < n; i++)
    {
        cin >>a>>b>>c;

        if ((a == 'X'&&b=='+'&&c=='+') || (a == '+'&&b=='+'&&c=='X'))
        {
            x = x + 1;
        }
        if ((a == 'X'&&b=='-'&&c=='-')|| (a == '-'&&b=='-'&&c=='X'))
        {
            x = x - 1;
        }
    }
    cout << x;

    return 0;
}