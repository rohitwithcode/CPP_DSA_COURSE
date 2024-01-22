#include<iostream>
using namespace std;

int fib(int n)
{

    int firstTerm=0;
    int secondTerm=1;
    int nextTerm=0;
    for(int i=3;i<=n;i++)
    {
         nextTerm=firstTerm+secondTerm;

        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
    return nextTerm;
}

int main()
{
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;

    cout<<"The "<<n<<" term of the fibonacci sequence is "<<fib(n);
    return 0;
}