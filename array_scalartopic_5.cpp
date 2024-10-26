#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    for (int i=4;i>=0;i--)
    {
  b[4-i]= a[i];
        }
        for(int j=0;j<5;j++)
        {
          cout<<b[j];
        }
    }
  

//using extra space a new array