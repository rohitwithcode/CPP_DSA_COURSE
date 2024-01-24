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

int uniqueElement(int arr[],int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
        
    }
    return ans;
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

    int answer=uniqueElement(arr,size);
    cout<<"Your unique element in array is : "<<answer<<endl;
    return 0;
}