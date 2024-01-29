#include<iostream>
using namespace std;

int peakElement(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while (start < end )
    {
        if (arr[mid] < arr[mid+1])
        {
            start=mid+1;
        }
        else if(arr[mid] > arr[mid+1])
        {
            end=mid;
        }
        else // when peak element is mid
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[]={3,3,3,4,5,1,1,0};

    cout<<"The peak element is at index : "<<peakElement(arr,8);
    return 0;
}