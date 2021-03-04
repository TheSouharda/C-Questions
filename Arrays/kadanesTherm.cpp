#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout << "Enter the number of elements" << endl;
    cin >> num;
    int arr[num];
    int cummSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        cummSum += arr[i];
        if (cummSum < 0)
        {
            cummSum = 0;
        }
        maxSum = max(maxSum, cummSum);
    }

    cout << maxSum;

    return 0;
}