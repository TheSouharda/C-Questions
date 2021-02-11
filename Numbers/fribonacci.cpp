//Fribonacci Series

#include <iostream>
using namespace std;
int main()
{

    system("cls");

    int num1 = 0;
    int num2 = 1;
    int c = 0;
    int term;
    cout << "Enter the number of terms " << endl;
    cin >> term;
    term = term - 2;

    cout << num1 << " " << num2 << " ";

    for (int i = 0; i < term; i++)
    {
        cout << num1 + num2 << " ";
        c = num1;
        num1 = num2;
        num2 = c + num2;
    }

    return 0;
}