#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternates(int arr[],int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if ((i+1)<size)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element of index : "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    cout<<"Your array before swap altenates : "<<endl;
    printArray(arr,size);

    cout<<"Your array after swap alternates : "<<endl;
    swapAlternates(arr,size);
    printArray(arr,size);
    
    
    return 0;
}