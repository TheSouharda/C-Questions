
/*


******
*    *
*    *
*    *
*    *
******


*/

#include <iostream>
using namespace std;



int main() {
   int row,col;
   row=5;
   col=5;
   for(int i=0;i<=row;i++){
       for(int j=0;j<=row;j++){
           if(i==0||i==row){
               cout<<"*";
           }
           else if(j==0||j==col){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
       }
       cout<<endl;
   }

    return 0;
}
