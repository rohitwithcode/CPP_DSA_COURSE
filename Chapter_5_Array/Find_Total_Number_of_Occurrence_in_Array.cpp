#include<iostream>
using namespace std;

int lastOccurrence(int arr[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;

    int lastOccurrenceOfElement=-2;

    while (low <= high)
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
        else // element < arr[mid]
        {
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return lastOccurrenceOfElement;
}

int firstOccurrence(int arr[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;

    int firstOccurrenceOfElement=-1;

    while (low <= high )
    {
        if (element == arr[mid] )
        {
           firstOccurrenceOfElement=mid;
           high=mid-1;
        }
        else if (element > arr[mid])
        {
            low=mid+1;
        }
        else // element < arr[mid]
        {
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return firstOccurrenceOfElement;
}

int totalNumberOfOccurrence(int arr[],int size,int element)
{
    int firstOccurrenceOfElement=firstOccurrence(arr,size,element);
    int lastOccurrenceOfElement=lastOccurrence(arr,size,element);

    int totalNumberOfOccurrenceOfElement=(lastOccurrenceOfElement-firstOccurrenceOfElement)+1;

    return totalNumberOfOccurrenceOfElement;
}

int main()
{
    int arr[]={1,1,1,1,2,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5};

    int totalNumberOfOccurrenceOfElement=totalNumberOfOccurrence(arr,20,3);

    cout<<"The Total Number of occurrence of 3 is : "<<totalNumberOfOccurrenceOfElement<<endl; 
    return 0;
}