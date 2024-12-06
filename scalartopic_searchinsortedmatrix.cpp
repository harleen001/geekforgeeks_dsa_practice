#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int k=4;
    for(int i=0;i<3;i++)
    {      
           for(int j=0;j<3;j++) {
            if(arr[i][j]==k)
            {
                cout<<"Element Found at Row = "<<i<<" and Column = "<<j<<endl;
                return 0;
               
            }
             
           } 
       
    }      cout<<"Element not Found"; 
    
   return 0;
}
