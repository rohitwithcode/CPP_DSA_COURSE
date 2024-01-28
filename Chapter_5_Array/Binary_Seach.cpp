#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int element)
{
    int low=0;
    int high=size-1;
    // int mid=(low+high)/2;

    int mid=low + (high-low)/2;
    
    while (low <= high)
    {
        if (element == arr[mid])
        {
            return mid;
        }
        
        if (element > arr[mid])
        {
            low=mid+1;
        }
        else // element < arr[mid]
        {
            high=mid-1;
        }
        // mid=(low+high)/2;

         mid=low + (high-low)/2;
    }
    return -1;
}

int main()
{
    int arrEven[]={2,4,6,8,10,12};
    int arrOdd[]={1,3,5,7,9};

    int element=binarySearch(arrEven,6,10);
    cout<<"The index of 10 is "<<element<<endl;

    int index=binarySearch(arrOdd,5,7);
    
    cout<<"The index of 7 is "<<index;
    return 0;
}