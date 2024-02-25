#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }

    while (a != b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
           
    }
    return a;
}

int main()
{
    cout<<"Enter the value A : ";
    int a;
    cin>>a;

    cout<<"Enter the value of B : ";
    int b;
    cin>>b;

    int ans=GCD(a,b);

    cout<<"The GCD of A="<<a<<" and B="<<b<<" is : "<<ans<<endl;
    return 0;
}
