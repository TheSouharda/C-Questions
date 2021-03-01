#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[num];
    }

    const int N = 1e6 + 2;

    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < num; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }

        if (minidx == INT_MAX)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << minidx + 1 << endl;
        }
    }

    return 0;
}