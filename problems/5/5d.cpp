#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, a, n, m = 0;
    cin >> n;
    string str;

    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            m = m + 1;
        }
    }
    cout<<m;
    return 0;
}