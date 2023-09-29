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
        while (column<=n-row+1)
        {
            cout<<column;
            column++;
        }

        int space=2*(row-1);
        while (space)
        {
            cout<<"*";
            space--;
        }
        int start=1;
        while (start<=n-row+1)
        {
            cout<<n-row+1-start+1;
            start++;
        }
        

        cout<<endl;
        row++;
    }
return 0;
}