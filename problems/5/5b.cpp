#include <iostream>
#include <string>
using namespace std;
int main()
{
    int  a, n;
    cin >> n;
    while (n--)
    {
        string str;
        int x;
        cin >> str;
        x = str.size();
        if (x < 11)
        {
            cout << str<<endl;
        }
        else
        {
            cout << str.front() << x - 2 << str.back()<<endl;
        }
        // cout<<x<<str<<'\n';
    }

    return 0;
}