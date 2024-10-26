#include <iostream>
#include <array>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int n =sizeof(a)/ sizeof(a[0]);
    int l=0;
    int r =n-1;

    while (l<r)
    {
    int temp = a[l];
     a[l]=a[r];
     a[r]=temp;
     l++; 
     r--;
    }
    for (int i=0;i<n;i++)
    {
    cout << a[i];
       
    }
  
}
//without using extra space a new array