#include <bits/stdc++.h>
using namespace std;

bool check(int x,int y, int z){
    int a ,b,c=0;

    a=max(x,max(y,z));

    if (a==x)   
    {
        b=y;
        c=z;
    }
    
    else if (a==y)
    {
        b=x;
        c=z;
    }

    else{
        b=y;
        c=x;
    }

    if (a*a==b*b+c*c)
    {
        return true;
    }
    else{
        return false;
    }
    
    
}


int main(){

int x,y,z=0;
cin>>x>>y>>z;

if (check(x,y,z))
{
    cout<<"Pythogorian Triplet"<<endl;
}
else
{
    cout<<"Not a Pythogorian Triplet"<<endl;
}


return 0;
}