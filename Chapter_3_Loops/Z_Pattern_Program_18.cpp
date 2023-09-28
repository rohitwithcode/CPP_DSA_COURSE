#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int row=1;
    char ch='A';
    while (row<=n)
    {
        int column=1;
        while (column<=row)
        {
            cout<<ch;
            column++;
        }
        cout<<endl;
        ch++;
        row++;
    }
    
return 0;
}