#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int number,int row,int column)
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            if (number == arr[row][column])
            {
                return true;
            }
            
        }
    }
    return false;
}

int main()
{
    int arr[3][4];
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    // Taking input of 2D array -> Row wise .....
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout<<"Enter the number at index  ["<<row<<","<<column<<"] : ";
            cin>>arr[row][column];
        }
        
    }
/*
    // Taking input of 2D array -> Column wise .....
    for (int column = 0; column < 4; column++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout<<"Enter the number at index  ["<<row<<","<<column<<"] : ";
            cin>>arr[row][column];
        }
        
    }
*/
    // Output of 2D array .....
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter the number to search = ";
    int searchNumber;
    cin>>searchNumber;

    
    if (isPresent(arr,searchNumber,3,4))
    {
        cout<<"Number "<<searchNumber<<" is present in Array..."<<endl;
    }
    else
    {
        cout<<"Number "<<searchNumber<<" is not present in Array..."<<endl;
    }

    return 0;
}