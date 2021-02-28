#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    int num[100];
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int diff, curr, count, ans;
    ans = 2;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    diff = num[1] - num[0];
    count = 2;

    for (int i = 1; i < n - 1; i++)
    {
        curr = num[i + 1] - num[i];
        if (curr == diff)
        {
            count++;
        }
        else
        {
            diff = curr;
            count = 2;
        }
        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}