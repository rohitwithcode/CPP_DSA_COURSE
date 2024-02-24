#include<iostream>
using namespace std;

void spiralPrint(int arr[][3],int nrow,int ncolumn)
{
    int row=nrow;
    int column=ncolumn;

    int count=0;
    int total=row*column;

    int startingRow=0;
    int endingRow=row-1;
    int startingColumn=0;
    int endingColumn=column-1;

    while (count < total)
    {
        // Print Starting Row 
        for(int index=startingColumn; count<total && index<=endingColumn;index++)
        {
            cout<<arr[startingRow][index]<<" ";
            count++;
        }
        // cout<<endl;
        startingRow++;

        // Print Ending Column
        for(int index=startingRow; count<total && index<=endingRow;index++)
        {
            cout<<arr[index][endingColumn]<<" ";
            count++;
        }
        endingColumn--;

        // Printing Ending Row
        for(int index=endingColumn; count<total  && index>=startingColumn;index--)
        {
            cout<<arr[endingRow][index]<<" ";
            count++;
        }
        // cout<<endl;
        endingRow--;

        // Printing Starting Column
        for(int index=endingRow; count<total  && index>=startingRow;index--)
        {
            cout<<arr[index][startingColumn]<<" ";
            count++;
        }
        startingColumn++;
    }
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    spiralPrint(arr,3,3);
    return 0;
}