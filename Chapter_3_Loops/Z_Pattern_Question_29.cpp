#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int row=1;
    int count=1;
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
            cout<<count;
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }
return 0;
}