#include<iostream>
using namespace std;

int main()
{
    int n=3;
    cout<<"Value of n is "<<n<<endl;

   // Address of operator - &

   cout<<"The address of n is "<<&n<<endl;

    // Pointer and Dereferencing Operator
   int *pointer=&n;

   cout<<"Address of n is : "<<pointer<<endl;
   cout<<"The value of n by dereference operator : "<<*pointer<<endl;

    double d=45.444;
    double *ptr=&d;

    cout<<"Address of d is : "<<ptr<<endl;
    cout<<"The value of d by dereference operator : "<<*ptr<<endl;

    cout<<"The size of the Integer is : "<<sizeof(n)<<endl;
    cout<<"The size of the pointer is : "<<sizeof(pointer)<<endl;

    cout<<"The size of the Double is : "<<sizeof(d)<<endl;
    cout<<"The size of the ptr is : "<<sizeof(ptr)<<endl;

    return 0;
}