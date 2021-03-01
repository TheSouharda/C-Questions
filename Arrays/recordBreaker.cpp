#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int num;
    cin >> num;
    int MAX = -1;
    int count = 0;

    int arr[num + 1];
    arr[num] = -1;

    if (num == 1)
    {
        return 0;
    }

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > MAX)
        {
            count++;
        }
        MAX = max(arr[i], MAX);
    }

    cout << count;

    return 0;
}