/*  *
   **
  ***
 ****



*/
#include <iostream>
using namespace std;
int main()
{

    system("cls");

    int row = 0;
    int col = 0;

    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j <= row - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}