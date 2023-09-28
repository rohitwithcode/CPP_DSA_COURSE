#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int row=1;
    
    while (row<=n)
    {
        // int space=n-row+column-1;
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int column=1;
        while (column<=row)
        {
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }
return 0;
}