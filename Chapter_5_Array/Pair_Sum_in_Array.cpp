#include<iostream>
using namespace std;

void pair_sum(int arr[],int size,int element)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (element==(arr[i]+arr[j]))
            {
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<"="<<element<<endl;
            }
        }
    }
    
}

int main()
{
    int arr[]={4,2,3,1,2,5,4,4,3,3};
    pair_sum(arr,10,5);
    return 0;
}