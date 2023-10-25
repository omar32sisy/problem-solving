// #include <iostream>
// using namespace std;
// int main()
// {

//     int x, i = 0, j = 0, k, n = 0;

//     cin >> x;

//     do
//     {
//         i = i + 1;
//         j = j + i;
//         x = x - j;
//         k = x + j;
//         n = n + 1;

//     } while (x > k);
//     cout << i << "\n";
//     cout << j << "\n";
//     cout << n;

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{

    int x, i = 0, j = 0, k, n = 0;

    cin >> x;

    do
    {
        i = i + 1;
        j = j + i;
        x = x - j;
        n = n + 1;

    } while (x > j);

    cout << n;

    return 0;
}
