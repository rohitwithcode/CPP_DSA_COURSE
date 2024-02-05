#include<iostream>
using namespace std;

bool isPossibleSolution(int arr[],int size,int no_Of_Partition,int mid)
{
    int partition_Number=1;

    int partition_sum=0;

    for (int i = 0; i < size; i++)
    {
        if (partition_sum + arr[i] <= mid)
        {
            partition_sum = partition_sum+arr[i];
        }
        else
        {
            partition_Number++;
            if (partition_Number > no_Of_Partition || arr[i] > mid)
            {
                return false;
            }
            partition_sum=arr[i];
        }
    }
    return true;
}   

int main()
{
    int arr[]={5,5,5,5};

    int start=0;
    int sum=0;
    for (int i = 0; i < 4; i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int answer=-1;
    while (start <= end)
    {
        if (isPossibleSolution(arr,4,2,mid))
        {
           answer=mid;
           end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<"Minimum painters partition value of array is : "<<answer<<endl;
    return 0;
}