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
        while (column<=n)
        {
            cout<<ch<<" ";
            column++;
        }
        cout<<endl;
        row++;
        ch++;
    }
    
return 0;
}