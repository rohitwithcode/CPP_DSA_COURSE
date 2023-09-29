#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int column=1;
        while (column<=row)
        {
            cout<<column;
            column++;
        }

        int start=row-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        cout<<endl;
        row++;
    }

return 0;
}