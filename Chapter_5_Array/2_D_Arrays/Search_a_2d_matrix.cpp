#include<iostream>
using namespace std;

int binarySearch(int arr[][3],int row,int column,int element)
{
    int start=0;
    int end=(row*column)-1;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        int target=arr[mid/column][mid%column];
        if (target==element)
        {
            return 1;
        }
        else if(target < element)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    bool ele=binarySearch(arr,3,3,7);

    if(ele)
    {
        cout<<"Element Found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }
    return 0;
}    