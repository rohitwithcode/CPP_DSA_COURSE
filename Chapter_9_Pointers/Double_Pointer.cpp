#include<iostream>
using namespace std;

void update(int **ptr)
{
    // ptr=ptr+1; // Something is change from this <--> No

    // *ptr=*ptr+1; // Something is change from this <--> Yes

    **ptr=**ptr+1; // Something is change from this <--> Yes
}

int main()
{
    int a=5;

    int *ptr1=&a;
    int **ptr2=&ptr1;
/*
    cout<<"Printing ptr1 .....>>>>>"<<ptr1<<endl;
    // cout<<"The address of ptr1 ------>>>>>>>"<<&ptr1<<endl;
    cout<<*ptr2<<endl;

    cout<<a<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    cout<<&a<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;

    cout<<&ptr1<<endl;
    cout<<ptr2<<endl;
*/

    cout<<endl<<endl;

    cout<<"Before : "<<a<<endl;
    cout<<"Before : "<<ptr1<<endl;
    cout<<"Before : "<<ptr2<<endl;

    update(ptr2);
    
    cout<<"After : "<<a<<endl;
    cout<<"After : "<<ptr1<<endl;
    cout<<"After : "<<ptr2<<endl;
    return 0;
}