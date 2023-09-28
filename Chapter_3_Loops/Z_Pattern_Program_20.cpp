#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the number = ";
    cin>>n;

    int row=1;

    while (row<=n)
    {
        int column=1;
        while (column<=row)
        {
            char ch='A'+column+row-2;
            cout<<ch;
            column++;
        }
        cout<<endl;
        row++;
    }
    
return 0;
}