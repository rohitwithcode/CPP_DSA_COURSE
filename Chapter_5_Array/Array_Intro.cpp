#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // Array Declaration
    int Array[10];
    int size=10;
    // printArray(Array,size);

    // Array Initialization
    int array[5]={4,5,6,7,7};
    int size1=5;
    // printArray(array,size1);

    int arr[10]={0}; // Initialization all locations with zero.
    // printArray(arr,10);

    int arra[5]={1};
    int sizee=sizeof(arra)/sizeof(int);
    // cout<<"The size of the arra is : "<<sizee<<endl;
    // printArray(arra,5);

    char chArray[5]={'R','O','H','I','T'};
    cout<<chArray[3]<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<chArray[i];
    }
    cout<<endl;

    double doubleArray[3]={4.4343,5.54434,6.599};
    float floatArray[3]{4.4,3.4,53.4};
    bool boolArray[2]={true,false};
    
    return 0;
}