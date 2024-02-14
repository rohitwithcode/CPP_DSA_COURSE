#include<iostream>
using namespace std;

void mergeTwoSortedArrays(int arr1[],int size1,int arr2[],int size2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<size1 && j<size2)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
    while (i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while (j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    
    
}

int main()
{
     int arr1[]={1,3,5,7,9};
     int arr2[]={2,2,2,2};

     int arr3[9]={0};
     
     
     mergeTwoSortedArrays(arr1,5,arr2,4,arr3);

     for(int i:arr3)
     {
        cout<<i<<" ";
     }
     cout<<endl;
    return 0;
}