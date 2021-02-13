/* 

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1


 */



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

int factorial(int i, int j)
{
    int result = 0;
    result = fact(i) / (fact(j) * fact(i - j));
    return result;
}

int main()
{
    system("cls");
    int n = 0;

    cout << "Enter the values of n " << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i, j) << " ";
        }

        cout << endl;
    }

    return 0;
}