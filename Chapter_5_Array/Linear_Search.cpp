#include<iostream>
using namespace std;

bool linearSeacrh(int arr[],int size,int element)
{
    bool numberPresent=false;
    for (int i = 0; i < size; i++)
    {
        if(element==arr[i]){
            numberPresent=true;           
        }
    }
    return numberPresent;
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
    int element;
    cout<<"Enter the element which you find in array : ";
    cin>>element;
    bool n=linearSeacrh(array,size,element);

    if (n)
    {
        cout<<"The number "<<element<<" is present in array. "<<endl;
    }
    else{
        cout<<"Number "<<element<<" not found in array";
    }
    
    return 0;
}