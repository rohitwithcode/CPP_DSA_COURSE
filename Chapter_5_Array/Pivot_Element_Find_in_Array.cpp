#include<iostream>
using namespace std;

int pivotElement(int arr[],int size)
{
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;

    while (low < high)
    {
        if (arr[mid] >= arr[0])
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
        mid=low+(high-low)/2;
    }
    return high;
}

int main()
{
    int arr[]={1,3,5,7,23,34,35,40,2};

    int pivot=pivotElement(arr,9);

    cout<<"Pivot element at index : "<<pivot<<endl;
    return 0;
}