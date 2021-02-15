#include <iostream>
using namespace std;

int BinarySearch(int arr[], int l, int r, int key)
{
    int mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (key == arr[mid])
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            l = mid + 1;
        }

        if (arr[mid] > key)
        {
            r = mid - 1;
        }

        else
        {
            return -1;
        }
    }
}
int main()
{

    system("cls");
    int arr[100];
    int num;
    int key = 0;
    int result = 0;

    cin >> num;

    cout << "enter the elements of the array in sorted way" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key to be searched" << endl;
    cin >> key;

    result = BinarySearch(arr, 0, num - 1, key);

    if (result = -1)
    {
        cout << "Element not found !";
    }
    else
    {
        cout << "Element found at index :" << result;
    }

    return 0;
}