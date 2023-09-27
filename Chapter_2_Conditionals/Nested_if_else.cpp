#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of  N : ";
    cin>>n;

    if(n<0){
        cout<<"Negative number \n";
    }
    else{
        if(n%2==0){
            cout<<"Even Number\n";
        }
        else{
            cout<<"Odd Number\n";
        }
    }
    return 0;
}