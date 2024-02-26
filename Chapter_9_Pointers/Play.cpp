#include<iostream>
using namespace std;

int main()
{
    // pointer to int is created, and pointing to some garbage address
    // int *p;
    // cout<<*p<<endl;

    // int *ptr=0;
    // cout<<*ptr<<endl;
/*
    int a=3; 
    int *ptr1=&a;

    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;

    int *ptr=0;
    ptr=&a;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

*/
    int n=5;
    int a=n;
    cout<<"Before : "<<n<<endl;
    a++;
    cout<<"after : "<<n<<endl;

    int *ptr=&n;

    cout<<"Before : "<<n<<endl;

    (*ptr)++;
    cout<<"After : "<<n<<endl;

    // Copying a pointer to another pointer.....
    int *q=ptr;

    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

    return 0;
}