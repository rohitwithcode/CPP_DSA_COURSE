#include<iostream> 
using namespace std;

void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int size)
{
    // when i=0 then condition of j is : (j<i-1)
    for (int i = 1; i < size;i++)
    {
        bool swap=false;
        // for round 1 to size-1
        for (int j = 0; j < size-i; j++)
        {
            // Process Element till n-i th index : 
            if (arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        if (swap == false)
        {
            // Time complexity in this case is : O(n)
            break;
        }
    }
}

int main()
{
    int arr[]={6,2,34,5,2};
    bubbleSort(arr,5);
    print(arr,5);
    return 0;
}