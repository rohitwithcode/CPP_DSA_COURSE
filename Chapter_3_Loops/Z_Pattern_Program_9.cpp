#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter your number = ";
    cin>>input;

    int row=1;
    int count=1;
    while (row<=input)
    {
        int column=1;
        while (column<=row)
        {
            cout<<count;
            count++;
            column++;
        }
        count=count-1;
        cout<<endl;
        row++;
        
    }
    
return 0;
}