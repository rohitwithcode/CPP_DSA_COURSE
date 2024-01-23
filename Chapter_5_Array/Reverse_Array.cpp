#include<iostream>
using namespace std;

int arrayReverse(int arr[],int size){
    for (int i = size-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<"Your actual array.....";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Your array in Reverse order......";
    arrayReverse(arr,10);
    return 0;
}