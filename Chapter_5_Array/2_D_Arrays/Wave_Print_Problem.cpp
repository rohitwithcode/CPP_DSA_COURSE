#include<iostream>
using namespace std;

void print(int arr[][3],int nrow,int ncolumn)
{
    for (int col = 0; col < ncolumn; col++)
    {
        if(col & 1)
        {
            // odd index ->  Bottom to Top
            for(int row=nrow-1;row >=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        else
        {
            // even index -> Top to Bottom
            for(int row=0;row<nrow;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
    
}
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};

    print(arr,2,3);
    return 0;
}