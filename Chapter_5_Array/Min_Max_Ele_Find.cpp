#include<iostream>
using namespace std;

int maxElement(int arr[],int size)
{
    int max=INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        // max=max(max,arr[i]);
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
}
int minElement(int arr[],int size)
{
    int min=INT8_MAX;
     for (int i = 0; i < size; i++)
    {
        // min=min(min,arr[i]);
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    return min;
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value of "<<(i+1)<<" index : ";
        cin>>array[i];
    }
    int maximum=maxElement(array,size);
    cout<<"The maximum element in array : "<<maximum;
    cout<<endl;

    int minimum=minElement(array,size);
    cout<<"The minimum element in array : "<<minimum;
    return 0;
}