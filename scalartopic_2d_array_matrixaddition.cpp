#include <iostream>
using namespace std;
int main()
{
    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
// Now this i did myself in less than a second