#include <iostream>
using namespace std;
int main()
{
    int output_arr[3][3], input_arr[3][3], x = 0, y = 1, z = 2;

    for (int i = 0; i < 3; i++) // make an array of 1
    {
        for (int j = 0; j < 3; j++)
        {
            output_arr[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++) // take the array from user
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input_arr[i][j];
        }
    }
    /*1 0 1
      8 8 8
      2 0 3
      
      1 1 1
      1 1 1
      1 1 1*/
      // i=0 and j=0
    /*1 1 1
      1 1 1
      1 1 1*/
    for (int i = 0; i < 3; i++) // turn on and off the adjsent light if exist 
    {
        for (int j = 0; j < 3; j++)
        {
            if ((input_arr[i][j]) % 2 != 0)
            {
                output_arr[i][j] = 1 - output_arr[i][j];

                if (i != 2)
                {
                    output_arr[i + 1][j] = 1 - output_arr[i+1][j];
                }
                if (j != 2)
                {
                    output_arr[i][j + 1] = 1 - output_arr[i][j+1];
                }
                if (i != 0)
                {
                    output_arr[i - 1][j] = 1 - output_arr[i-1][j];
                }
                if (j != 0)
                {
                    output_arr[i][j - 1] = 1 - output_arr[i][j-1];
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << output_arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}
