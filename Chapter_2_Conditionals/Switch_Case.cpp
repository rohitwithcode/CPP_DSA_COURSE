#include<iostream>
using namespace std;
int main(){

    cout<<"Press 1. Add\n";
    cout<<"Press 2. Sub\n";
    cout<<"Press 3. Mul\n";
    cout<<"Press 4. Div\n";

    int n;
    cout<<"Enter the value = ";
    cin>>n;
    switch (n)
    {
    case 1:
        int a,b,sum;
        cout<<"Enter the first number = ";
        cin>>a;
        cout<<"Enter the second number = ";
        cin>>b;
        sum=a+b;
        cout<<"Addition = "<<sum<<endl;
        break;
    case 2:
        int x,y,sub;
        cout<<"Enter the first number = ";
        cin>>x;
        cout<<"Enter the second number = ";
        cin>>y;
        sub=x-y;
        cout<<"Addition = "<<sub<<endl;
        break;
    case 3:
        int p,q,mul;
        cout<<"Enter the first number = ";
        cin>>p;
        cout<<"Enter the second number = ";
        cin>>q;
        mul=p*q;
        cout<<"Addition = "<<mul<<endl;
        
        break;
    case 4:
        int d;
        float e,div;
        cout<<"Enter the first number = ";
        cin>>d;
        cout<<"Enter the second number = ";
        cin>>e;
        div=d/e;
        cout<<"Addition = "<<div<<endl;
        break;
    default:
        cout<<"You Enterd a Invalid number \n";
        break;
    }
return 0;
}