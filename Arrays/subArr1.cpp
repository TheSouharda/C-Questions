#include <bits/stdc++.h>
using namespace std;
int main()
{

    system("cls");
    int num = 0;
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = i; j < num; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k];
            }
            cout << endl;
        }
    }

    return 0;
}