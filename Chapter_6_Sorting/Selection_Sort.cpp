#include<iostream>
using namespace std;

void selectionSort(int arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int Minimum=i;
        for (int  j = i+1; j < size; j++)
        {
            if (arr[Minimum] > arr[j])
            {
                Minimum=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[Minimum];
        arr[Minimum]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={64,12,34,25,11};
    cout<<"Your Array after select sort "<<endl;
    selectionSort(arr,5);
    return 0;
}