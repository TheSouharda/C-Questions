#include <iostream>
using namespace std;

void InsertionSort(int arr[], int num)
{
    int temp = 0;
    for (int i = 1; i < num; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "Your Sorted array" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    system("cls");

    int arr[100];
    int num = 0;

    cout << "Enter the number of elements" << endl;
    cin >> num;

    cout << "Enter the  elements" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    InsertionSort(arr, num);

    return 0;
}