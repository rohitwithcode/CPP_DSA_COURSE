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
            char ch='A'+row-1;
            cout<<ch;
            column++;
        }
        cout<<endl;
        row++;
    }
    
return 0;
}