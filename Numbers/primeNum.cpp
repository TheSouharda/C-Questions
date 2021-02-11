//Program to find if a number is prime or not.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
    int num = 0;
    cout << "Enter the num" << endl;
    cin >> num;

    bool flag = 0;

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Number isnt Prime" << endl;
    }
    else
    {
        cout << "Number is prime" << endl;
    }

    return 0;
}