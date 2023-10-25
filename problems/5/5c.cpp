#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, a, n;
    string str;
    cin >> n;
    while (n--)
    {
        int m=1;
        cin >> str;
        x = str.size();
        if (x < 3)
        {
            cout << str;
        }
        else
        {
            cout << str[0] ;
            for (int i = 0; i < x; i=i+2)
            {
            cout << str[m];
            m=m+2;

            }
        }
        cout<<'\n';
        // cout<<x<<str<<'\n';
    }

    return 0;
}