#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int k=2;
    for(int i=0;i<3;i++)
    {      
            cout<<arr1[i][k]<<" ";
            k--;   
    }
    cout<<endl;
}
