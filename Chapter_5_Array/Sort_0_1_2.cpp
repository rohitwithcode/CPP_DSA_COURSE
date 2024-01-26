#include<iostream>
using namespace std;

void sort_0_1_2(int arr[],int size)
{
   int low=0;
   int mid=0;
   int high=size-1;

   while (mid<high)
   {
        if (arr[low]==0 || arr[mid]==0)
        {
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if (arr[mid]==2)
        {
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
        else
        {
            mid++;
        }   
   }
   for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }  
}
int main()
{
    int arr[]={2,2,2,1,0,2,2,1,0,1};

    sort_0_1_2(arr,10);
    return 0;
}