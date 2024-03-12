#include<iostream>
using namespace std;

int getSum(int *arr,int n)
{
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum =sum +arr[i];
    }
    return sum;
}

int main()
{
    // int *a=new int; Creating a variable 
    // int *arr=new int[5]; Creating a Array

    int n;
    cout<<"Enter n :";
    cin>>n;

    int * arr=new int[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=getSum(arr,n);
    cout<<"The sum of array : "<<ans <<endl;
    return 0;
}