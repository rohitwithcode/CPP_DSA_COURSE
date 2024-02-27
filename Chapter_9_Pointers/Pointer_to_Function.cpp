#include<iostream>
using namespace std;

void print(int *ptr)
{
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
 
void update(int *ptr) 
{
    // ptr=ptr+1;
    // cout<<"inside : "<<ptr<<endl;

    *ptr=*ptr+1;
}

int getSum(int *arr,int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum =sum + arr[i];
    }
    return sum;
}

int main()
{
    int a=3;
    int *ptr=&a;

    // print(ptr);

    cout<<"Before : "<<*ptr<<endl;

    update(ptr);
    cout<<"After : "<<*ptr<<endl;

    int arr[6]={1,2,3,4,5,8};

    cout<<"Sum is : "<<getSum(arr+3,3)<<endl;

    return 0;
}