#include<iostream>
using namespace std;

bool checkArrayRotatedSorted(int arr[],int size)
{
    int count=0;
    int n=size-1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i-1] > arr[i])
        {
            count++;
        }
    }
    if (arr[size-1] >arr[n])
    {
         count++;
    }
    return count <= 1;
}

int main()
{
    int arr[]={3,4,5,1,2};

    bool ch=checkArrayRotatedSorted(arr,5);

    cout<<ch<<endl;
    return 0;
}