#include<iostream>
using namespace std;

int leftOccurrence(int arr[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;

    int leftOccurrenceOfElement=-1;

    while (low <= high )
    {
        if (arr[mid] == element)
        {
            leftOccurrenceOfElement=mid;
            high=mid-1;
        }
        else if (element > arr[mid] )
        {
            low=mid+1;
        }
        else if (element < arr[mid] )
        {
            high=mid-1;
        }
        mid=low+(high-low)/2;        
    }
    return leftOccurrenceOfElement;
}

int lastOccurrence(int arr[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;
    int lastOccurrenceOfElement=-1;

    while (low <= high )
    {
        if (element == arr[mid])
        {
            lastOccurrenceOfElement=mid;
            low=mid+1;
        }
        else if (element > arr[mid])
        {
            low=mid+1;
        }
        else if (element < arr[mid])
        {
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return lastOccurrenceOfElement;
}

int main()
{
    int arr[]={1,1,1,2,2,2,3,3,6};

    cout<<"The first occurrence of 3 is at index : "<<leftOccurrence(arr,9,3)<<endl;
    cout<<"The last occurrence of 3 is at index : "<<lastOccurrence(arr,9,3);
    return 0;
}