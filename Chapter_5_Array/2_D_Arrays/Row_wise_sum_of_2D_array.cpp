#include<iostream> 
using namespace std;

void rowWiseSum(int arr[][4],int row,int column)
{
    int rowCount=0;
    for (int row = 0; row < 4; row++)
    {
        rowCount++;
        int sum=0;
        for (int column = 0; column < 4; column++)
        {
            sum=sum+arr[row][column];
        }
        cout<<"The sum of the elements of the "<<rowCount<<" row is : "<<sum<<endl;
    }
    
}

int main()
{
    int arr[4][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333},{4,44,444,4444}};

    rowWiseSum(arr,4,4);
    return 0;
}