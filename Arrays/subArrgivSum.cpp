#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int num = 0;
    int s;
    int arr[num];
    int strt = -1, end = -1, i = 0, j = 0, sum = 0;

    cout << "Enter no. if elemnts and S size" << endl;
    cin >> num >> s;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    while (j < num && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << j << endl;
    }

    while (j < num)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            strt = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }

    cout << strt << " " << end << endl;

    return 0;
}