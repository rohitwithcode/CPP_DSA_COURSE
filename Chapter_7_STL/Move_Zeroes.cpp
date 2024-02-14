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

void moveZeroes(int arr[],int size)
{
    int i=0;
    int j=1;

    while (i<size && j<size)
    {
        if (arr[i]==0 && arr[j]==0)
        {
            j++; 
        }
        else 
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j++;
        }
    }
    
}

int main()
{
    int arr[]{0,1,0,0,0,1,0,20,340454,0,343,0,3,12,0};

    moveZeroes(arr,15);
    print(arr,15);
    return 0;
}