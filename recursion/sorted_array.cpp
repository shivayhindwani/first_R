#include<iostream>
using namespace std;
int main()
{
    int count=1;
    int arr[]={2,4,6,9,11,13};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            count=0;
        }
    }
    if(count==0)
    cout<<"unsorted array . "<<endl;
    else
    cout<<"Sorted array . "<<endl;
}

// try using recursion .
