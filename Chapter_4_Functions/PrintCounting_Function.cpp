#include<iostream>
using namespace std;

void printCount(int n)
{
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the value of  n: ";
    cin>>n;

    printCount(n);
    return 0;
}