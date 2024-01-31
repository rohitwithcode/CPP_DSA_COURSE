#include<iostream>
using namespace std;

int pivotElement(int arr[],int size)
{
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;

    while (low < high )
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

int binarySearch(int arr[],int start,int size,int element)
{
    int low=start;
    int high=size;
    int mid=low+(high-low)/2;
    
    while (low <= high)
    {
       
        if (arr[mid]  == element)
        {
            return mid;
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
    return -1;
}
int SearchElementRotatedArray(int arr[],int size,int element)
{
    int pivot=pivotElement(arr,size);

    if (element >= arr[pivot] && element <= arr[size-1])
    {
       return binarySearch(arr,pivot,size-1,element);
    }
    else
    {
        cout<<"Called"<<endl;
        return binarySearch(arr,0,pivot-1,element);
    }
}
int main()
{
    int arr[]={8,9,1,3,4,5,6};

    int element=SearchElementRotatedArray(arr,7,9);
    cout<<"The elemenet at index at :"<<element<<endl;
    
    return 0;
}