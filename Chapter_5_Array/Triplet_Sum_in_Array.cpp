#include<iostream>
using namespace std;

void triplet_sum(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (element == (arr[i]+arr[j]+arr[k]))
                {
                    cout<<"["<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"]"<<endl;
                }
                
            }
            
        }
        
    }
    
}

int main()
{
    int arr[]={4,2,3,1,2,5,4,4,3,3};
    triplet_sum(arr,10,12);
    return 0;
}