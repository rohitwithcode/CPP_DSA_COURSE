#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int sum=0,i=1;

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The sum of the numbers = "<<sum<<endl;
return 0;
}