#include<iostream>
using namespace std;

void rotateArray(int arr[],int size,int HMSpace)
{
       int temp[size];

       for (int i = 0; i < size; i++)
       {
            temp[(i+HMSpace)%size]=arr[i];
       }
       for (int i = 0; i < size; i++)
       {
            cout<<temp[i]<<" ";
       }
        cout<<endl;   
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};

    rotateArray(arr,7,2);
    return 0;
}