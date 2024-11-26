#include <iostream>
using namespace std;
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[j][i];
        }
        cout<<endl;
    }
}
//where r row is 2 and c column is 3
//By default known as Row Major Ordering