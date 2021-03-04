#include <bits/stdc++.h>
using namespace std;
int main()
{

    system("cls");
    int num;
    cout << "Enter the number of elements" << endl;
    cin >> num;
    int arr[num];
    int cumm[num + 1];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cumm[0] = 0;
    for (int i = 1; i <= num; i++)
    {
        cumm[i] = cumm[i - 1] + arr[i - 1];
    }

    int Max = INT_MIN;

    for (int i = 1; i <= num; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cumm[i] - cumm[j];
            Max = max(sum, Max);
        }
    }

    cout << Max << endl;

    return 0;
}