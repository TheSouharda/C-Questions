#include <iostream>
using namespace std;
int main()
{

    system("cls");

    int num = 0;
    int rem, rev = 0;
    cout << "Enter the number" << endl;
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    cout << "Reversed Number is : " << rev;

    return 0;
}