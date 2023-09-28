#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;

    int row=1;
    while (row<=n)
    {
        // int space=n-row+1;
        int space=row-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int column=1;
        while (column<=n-row+1)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
    
return 0;
}