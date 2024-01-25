#include<iostream> 
using namespace std;

void sort_0_1(int arr[],int size)
{
    int left=0,right=size-1;
   while (left<right)
   {
     if (arr[left]==0)
    {
        left++;
    }
    else if (arr[right]==1)
    {
        right--;
    }
    else{
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    
   }
   for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }


    // if (arr[left]==0 && arr[right]==1)
    // {
    //     left++;
    //     right--;
    // }
    // else if (arr[left]==1 && arr[right]==1)
    // {
    //     right--;
    // }
    // else if (arr[left]==0 && arr[right]==0)
    // {
    //     left++;
    // }
    // else{
    //     int temp=arr[left];
    //     arr[left]=arr[right];
    //     arr[right]=temp;
    //     left++;
    //     right--;
    // } 

   
//     while (arr[left]==0 && left<right)
//     {
//         left++;
//     }
//     while (arr[right]==1 && left<right)
//     {
//         right--;
//     }
    
//     int temp=arr[left];
//     arr[left]=arr[right];
//     arr[right]=temp;
//     left++;
//     right--;
    
//    }
//    for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
}

 int main()
 {
    int arr[]={1,0,1,0,1,1,0,1,1,0,1};
    sort_0_1(arr,11);
    return 0;
 }