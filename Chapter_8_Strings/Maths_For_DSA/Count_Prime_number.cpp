#include<iostream>
#include<vector>
using namespace std;

bool primeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int countPrimeNumbers(int n)
{
    int primeNumberCounter=0;
    vector<bool> primeNumber(n+1,true);

    primeNumber[0]=primeNumber[1]=false;
    for (int i = 2; i < n; i++)
    {
        if (primeNumber[i])
        {
            primeNumberCounter++;
            for (int j = 2*i; j < n; j+=i)
            {
                primeNumber[j]=0;
            }
        }
    }
    return primeNumberCounter;
}

int main()
{
    cout<<"Enter the number : ";
    int number;
    cin>>number;

    int primeNumbers;

    primeNumbers=countPrimeNumbers(number);

    cout<<"The value of prime numbers between 1 to "<<number<<" is "<<primeNumbers<<endl;
    return 0;
}