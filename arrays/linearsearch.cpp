#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={9,5,1,8,3};
    int x=8;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element is present at position = "<<i<<endl;
            return 0;
        }
       
    }
    cout<<"element not found"<<endl;
    return 0;
};