// this example show sorting of a pair according to number each pair is having 
// in this example arr1 is combined with arr2 in a new pair array that is shivay 
// pairs can be in form of array or any other datatype .as shown below.


#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[]={1,9,2,8};
    char arr2[]={'a','b','c','d'};
    int size=sizeof(arr1)/sizeof(int);
    pair<int,char>shivay[size];
    for(int i=0;i<size;i++)
    {
        shivay[i].first=arr1[i];
        shivay[i].second=arr2[i];

    }
    sort(shivay,shivay+size);
    for(int i=0;i<size;i++)
    {
        cout<<shivay[i].second<<"  ";
    }
}