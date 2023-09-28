#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter your number = ";
    cin>>input;

    int row=1;
    
    while (row<=input)
    {
        int column=1;
        int count=row;
        while (column<=row)
        {
            cout<<count;
            count++;
            column++;
        }
        cout<<endl;
        row++;
        
    }
    
return 0;
}