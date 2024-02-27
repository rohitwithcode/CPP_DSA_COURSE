#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};

    char ch[6]="abcde";

    cout<<"Integer array : "<<arr<<endl;
    // Attention here....
    cout<<"Character Array : "<<ch<<endl;

    char *ptr=&ch[0];
    // this print entire string
    cout<<ptr<<endl;

    char temp='z';
    char *p=&temp;

    cout<<p<<endl;


    
    return 0;
}