#include <iostream>
using namespace std;
int main()
{
    int arr[4]={5,7,10,20};
     int largest=0;
    for(int i=0;i<4;i++)
   
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
           
        }
       
    }
    
}