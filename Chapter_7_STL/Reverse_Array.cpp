#include<iostream>
#include<vector>
using namespace std;
/*
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void Reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while (start <= end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    
}
*/

vector<int> reverseVector(vector<int> v)
{
    int start=0;
    int end=v.size()-1;
    while (start <= end)
    {
        swap(v[start],v[end]);

        start++;
        end--;
    }
    return v;
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // int arr[]={4,3,2,1,0};
    // Reverse(arr,5);
    // print(arr,5);

    vector<int> v;

    v.push_back(34);
    v.push_back(23);
    v.push_back(31);
    v.push_back(4);
    v.push_back(30);

    vector<int> answer=reverseVector(v);
    cout<<"Printing Reverse Array : "<<endl;
    printVector(answer);
    // for(int i:answer)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return 0;
}