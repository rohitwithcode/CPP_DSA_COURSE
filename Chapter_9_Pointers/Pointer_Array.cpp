#include<iostream>
using namespace std;

int main()
{
/*
    int arr[10]={3,8,45,23,6,6,7,7,23,5};

    cout<<"Address of first memory block is : "<<arr<<endl;
    cout<<"The value of first memory block is : "<<arr[0]<<endl;
    cout<<"Address of first memory block is : "<<&arr[0]<<endl;

    cout<<"Value of (*arr) : "<<*arr<<endl;
    cout<<"Value of (arr+1) :"<<*arr+1<<endl;
    cout<<"Value of arr : *(arr+1) :"<<*(arr+1)<<endl;
    cout<<"Value of arr : (*arr)+1 :"<<(*arr)+1<<endl;

    cout<<"Value of arr[2] : "<<arr[2]<<endl;
    cout<<"Value of *(arr+2) : "<<*(arr+2)<<endl;

    int i=3;
    cout<<"Value of i[arr] : "<<i[arr]<<endl;
    cout<<"Value of *(i+arr) : "<<*(i+arr)<<endl;

    int *ptr=arr;
    
    cout<<arr<<endl;
    cout<<(*arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(&arr)<<endl;
    cout<<ptr<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl; // size of pointer is 8 bytes...
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;



    int a[20]={1,2,3,4,5,6};

    cout<<"----> : "<<&a[0]<<endl;
    // cout<<"----> : "<<&a<<endl;
    // cout<<"----> : "<<a<<endl;

    int *ptr=&a[0];
    // cout<<"----> : "<<ptr<<endl;
    // cout<<"Value : "<<*ptr<<endl;
    cout<<"----> : "<<&ptr<<endl;

*/

    int array[10]={3,4,5};

    // array=array+1; not assignable

    int *ptr=array;
    cout<<"-----> "<<ptr<<endl;
    ptr=ptr+1;
    cout<<"-----> "<<ptr<<endl;


    return 0;
}