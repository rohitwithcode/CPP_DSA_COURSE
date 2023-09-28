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
        while (column<=row)
        {
            cout<<row+column-1;
            column++;
        }
        cout<<endl;
        row++;
        
    }
    
return 0;
}