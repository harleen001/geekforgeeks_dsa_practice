#include <iostream>
using namespace std;
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
//where r row is 2 and c column is 3
//By default known as Row Major Ordering