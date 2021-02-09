#include <iostream>
using namespace std;
int main(){

    system("cls");

int row=0;
cin>>row;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            cout<<"*";
        }
        
        int space=2*row - (2*i+1);

        for (int j = 0; j < space; j++)
        {
            cout<<" ";
        }

        
        for (int j = 0; j <=i ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
    
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j <i ; j++)
        {
            cout<<"*";
        }
        
        int space=2*row - (2*i+1);

        for (int j = 0; j < space; j++)
        {
            cout<<" ";
        }

        
        for (int j = 0; j <i ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
    

return 0;
}