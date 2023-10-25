#include <iostream>
using namespace std;

int main()
{
    int n, a, b, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> a >> b;
    x = a - 1;

    for (int i = 0; i < (b - a + 1); i++)
    {
        cout << arr[x]<<" ";/////
        x = x + 1;
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++) //0-indexing
//     {
//         cin>>arr[i];
//     }
//     int l,r; 
//     cin>>l>>r; //Input is in 1-indexing (Position)
//     for(int i=l-1; i<=(r-1); i++) //0-indexing
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }
