#include<iostream>
using namespace std;

int print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp=arr[i];
        int j = i-1;
        for (; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                //shifting 
                arr[j+1]=arr[j];
                
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    
}

int main()
{
    int arr[]={34,3,33,44,2,35,1};

    insertionSort(arr,7);
    print(arr,7);
    return 0;
}