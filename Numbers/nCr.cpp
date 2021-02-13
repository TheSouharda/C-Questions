#include <iostream>
using namespace std;

int fact(int num)
{

    int facto = 1;
    for (int i = 2; i <= num; i++)
    {
        facto = facto * i;
    }
    return facto;
}

int main()
{

    system("cls");

    int n, r = 0;
    int result = 0;

    cout << "Enter the values of n and c" << endl;

    cin >> n >> r;

    result = fact(n) / (fact(r) * fact(n - r));
    cout << result;

    return 0;
}