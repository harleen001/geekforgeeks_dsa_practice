#include <iostream>
using namespace std;
int main()
{
    int num =10;
    int factorial = 1;
    for (int i=1;i<=num;i++)
    {
       factorial=factorial*i;
    }
    cout<<factorial;
}