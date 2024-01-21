#include<iostream>
using namespace std;

bool Even_Odd(int a){
    
    if(a%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;

    bool b=Even_Odd(a);

    if (b)
    {
        cout<<a<<" is  Even Number.";
    }
    else{
        cout<<a<<" is Odd Number.";
    }
    return 0;
}