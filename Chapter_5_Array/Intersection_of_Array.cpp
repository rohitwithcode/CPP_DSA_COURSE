#include<iostream>
using namespace std;

// void array_Intersection(int arr[],int arr1[],int size1,int size2)
// {
//     for (int i = 0; i < size1; i++)
//     {
//         int element=arr[i];
//         for (int j = 0; j < size2; j++)
//         {
//             if (element==arr1[j])
//             {
//                 cout<<element<<" ";
//                 arr1[j]=INT8_MIN;
//                 break;
//             }
//         }   

//     }
// }

void array_Intersection(int arr[],int arr1[],int size1,int size2)
{
    for (int i = 0; i < size1;)
    {
        for (int j = 0; j < size2;)
        {
            
            if (arr[i]==arr1[j])
            {
                cout<<arr[i]<<" ";
                i++;
                j++;
            }
            else if (arr[i]<arr1[j])
            {
                i++;
            }
            else
            {
                j++;
            }        
        }     
    }
}

int main()
{
    int arr[]={1,2,2,3,4,5,6,7};
    int arr1[]={2,2,3,3,7};

    array_Intersection(arr,arr1,8,5);
    return 0;
}
/*
#include<iostream>
#include<vector>
using namespace std;

void array_Intersection(int arr[],int arr1[],int size1,int size2)
{
    vector<int> a;
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
            
            if (arr[i]==arr1[j])
            {
                // a.push_back(arr[i]);
                cout<<arr[i]<<" ";
                i++;
                j++;
            }
            else if (arr[i]<arr1[j])
            {
                i++;
            }
            else // if(arr[i]>arr1[j])
            {
                j++;
            }        
    }  
    // for(int l:a){
    //     cout<<l<<" ";
    // }
}

int main()
{
    int arr[]={1,2,2,3,3,4,5,7};
    int arr1[]={2,2,3,3,7};

    array_Intersection(arr,arr1,8,5);
    return 0;
}
*/