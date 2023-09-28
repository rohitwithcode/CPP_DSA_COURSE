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
        char srt='A' +n -row;
        while (column<=row)
        {
            cout<<srt;
            srt++;
            column++;
        }
        cout<<endl;
        row++;
    }
return 0;
}