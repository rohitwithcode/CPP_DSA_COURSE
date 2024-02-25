#include<iostream>
using namespace std;

bool primeNumber(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout<<"Enter the number : ";
    int n;
    cin>>n;

    bool prime;

    prime=primeNumber(n);

    if (prime)
    {
        cout<<n<<" is prime number ....."<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number ....."<<endl;
    }
    return 0;
}