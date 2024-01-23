#include<iostream>
using namespace std;

int arraySum(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>> size;
    
    int array[size];
    for (int i = 0; i <size; i++)
    {
        cout<<"Enter the number of index "<<(i+1)<<" : ";
        cin>>array[i];
    }

    int sum=arraySum(array,size)   ;
    cout<<"The sum of the array element is : "<<sum<<endl;

}