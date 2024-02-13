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

void reverseArrayFromGivenIndex(int arr[],int size,int index)
{
    int start=0;
    int end=size-1;

    while (index <= end)
    {
        int temp=arr[index]   ;
        arr[index]=arr[end];
        arr[end]=temp;

        index++;
        end--;
    }
}

int main()
{
    int arr[]={10,9,8,7,6};

    cout<<"Enter the index number : ";
    int index;
    cin>>index;

    cout<<"Reverse Array from index "<<index<<" is below "<<endl;

    reverseArrayFromGivenIndex(arr,5,index);
    print(arr,5);
    return 0;
}