/*

1
10
101
1010
10101

*/


#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (j + 1) % 2;
        }
        cout << endl;
    }

    return 0;
}