#include <bits/stdc++.h>
using namespace std;
int main()
{

    system("cls");
    int num = 0, pos = 0;

    cout << "Enter the no. of elements" << endl;
    cin >> num;
    int arr[num];
    bool check[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }

    for (int i = 0; i < num; i++)
    {

        if (check[i] == false)
        {
            pos = i + 1;
            break;
        }
    }

    cout << "Position is " << pos << endl;

    return 0;
}