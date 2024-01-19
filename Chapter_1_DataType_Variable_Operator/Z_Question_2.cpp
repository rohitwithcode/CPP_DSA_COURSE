#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int m=n;

    if (n==0)
    {
        return 1;
    }
    int mask=0;
    while(m!=0)
    {
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    int answer=(~n) & mask;

    cout<<answer<<endl;
    return 0;
}