#include<iostream>
using namespace std;

int main()
{
/*
    cout<<"Enter the number = ";
    int n;
    cin>>n;

    if (n>0)
    {
        cout<<"A is Positive\n";
    }
    else{
        cout<<"A is Negative\n";
    }

    int a,b;
    cin>>a >>b;
    cout<<"Value of A is "<<a<<" and B is = "<<b<<endl;


    int x,y;
    x=cin.get(); // It gives you return a character
    cout<<"Value of x is "<<x<<endl;
*/

    int p,q;
    cout<<"Enter the Value of p ";
    cin>>p;
    cout<<"Enter the Value of  q ";
    cin>>q;

    if(p>q){
        cout<<"A is greater number \n";
    }
    if (q>p)
    {
        cout<<"B is greater number \n";
    }
    
    return 0;
}