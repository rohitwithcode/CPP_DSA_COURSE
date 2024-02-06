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

void selectionSort(int arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int minimumIndex=i;
        for (int  j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minimumIndex])
            {
                minimumIndex=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[minimumIndex];
        arr[minimumIndex]=temp;
    }
}
int main()
{
    int arr[]={64,12,34,25,11};
    cout<<"Your Array before selection sort "<<endl;
    print(arr,5);

    cout<<"Your Array after selection sort "<<endl;
    selectionSort(arr,5);
    print(arr,5);
    return 0;
}