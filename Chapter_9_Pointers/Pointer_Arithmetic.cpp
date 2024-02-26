#include<iostream>
using namespace std;

int main()
{
    int a=34;
    
    int *ptr=&a;

    // *ptr++;
    // cout<<(*ptr)++<<endl;
    // cout<<*ptr<<endl;

    *ptr=*ptr+1;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}