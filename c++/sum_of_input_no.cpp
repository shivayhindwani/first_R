#include<iostream>
using namespace std;
int main()
{
    int r,n,sum=0;
    cout<<"Enter a number :";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    cout<<"Sum is :"<<sum;

    return 0;
}