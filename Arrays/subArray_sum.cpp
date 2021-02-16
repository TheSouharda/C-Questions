/* WAP to sum all the possible sub-arrays og the given array */

#include <iostream>
using namespace std;
int main()
{

    system("cls");
    int arr[100];
    int num = 0;
    cout << "Enter number of elements ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        int sum = 0;
        for (int j = i; j < num; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
    }

    return 0;
}