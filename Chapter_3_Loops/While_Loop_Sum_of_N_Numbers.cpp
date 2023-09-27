#include<iostream>
using namespace std;
int main(){

    int n,sum=0;
    cout<<"Enter the value = ";
    cin>>n;

    int i=1;

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum = "<<sum<<" ";
return 0;
}