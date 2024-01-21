#include<iostream>
using namespace std;

int factorial(int n)
{
    int f=1;
    for(int i=n;i>=1;i--){
        f=f*i;
    }
    return f;
}
int nCr(int n,int r)
{
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main()
{
    int n,r;
    cout<<"Enter the value of N : ";
    cin>>n;

    cout<<"Enter the value of R : ";
    cin>>r;

    int ncr=nCr(n,r);
    cout<<"The value of the nCr of "<<n<<" C "<<r<<" is : "<<ncr;
    // int f=factorial(n);
    // cout<<f;
    return 0;
}