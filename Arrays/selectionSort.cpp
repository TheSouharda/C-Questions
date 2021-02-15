#include <iostream>
using namespace std;

void selectionSort(int arr[], int num)
{
    int temp = 0;
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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

    selectionSort(arr, num);

    return 0;
}