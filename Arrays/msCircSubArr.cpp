#include <bits/stdc++.h>
using namespace std;

int kadenesTherm(int arr[], int num)
{
    int cummSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < num; i++)
    {
        cummSum += arr[i];
        if (cummSum < 0)
        {
            cummSum = 0;
        }
        maxSum = max(maxSum, cummSum);
    }
    return maxSum;
}
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

    int wrapSum = 0;
    int nonWrapSum = 0;

    nonWrapSum = kadenesTherm(arr, num);

    int totalSum = 0;

    for (int i = 0; i < num; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadenesTherm(arr, num);

    cout << max(wrapSum, nonWrapSum);

    return 0;
}