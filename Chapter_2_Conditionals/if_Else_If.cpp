#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    if(a>0){
        cout<<"A is Positive number \n";
    }
    else if(a<0){
        cout<<"A is Negative number\n";
    }
    else{
        cout<<"A is Zero\n";
    }
    return 0;
}