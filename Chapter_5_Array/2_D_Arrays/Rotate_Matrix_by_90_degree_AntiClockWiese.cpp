#include<iostream>
using namespace std;

void rotateMatrix(int arr[][3],int nrow,int ncolumn)
{
    for(int column=ncolumn-1;column>=0;column--)
    {
        for(int row=0;row<=nrow-1;row++)
        {
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    rotateMatrix(arr,3,3);
    return 0;
}