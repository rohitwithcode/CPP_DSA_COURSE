#include<iostream> 
using namespace std;

int largestRow(int arr[][4],int row,int column)
{
    int max=INT16_MIN;
    int rowCount=-1;
    for (int row = 0; row < 4; row++)
    {
        int sum=0;
        for (int column = 0; column < 4; column++)
        {
            sum=sum+arr[row][column];
        }
        if (sum > max)
        {
            max=sum;
            rowCount++;
        }
    }
    return rowCount;
}
int main()
{
    int arr[4][4]={{1,11,111,1111},{2,22,222,2222},{4,44,444,4444},{3,33,333,3333}};

    int maxRow=largestRow(arr,4,4);
    
    cout<<"The largest row of array is at index : "<<maxRow<<endl;
    return 0;
}