#include<iostream>
using namespace std;

void rotateMatrix(int arr[][3],int nrow,int ncolumn)
{
    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            cout<<arr[j][i]<<" ";
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