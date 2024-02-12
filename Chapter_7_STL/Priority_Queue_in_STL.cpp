#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Max Heap
    priority_queue<int> maxHeap;

    // Min Heap
    priority_queue<int,vector<int> , greater<int>> minHeap;

    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);
    maxHeap.push(0);

    cout<<"Size : "<<maxHeap.size()<<endl;
    cout<<"The elements of Max Heap is below : "<<endl;
    int size= maxHeap.size();
    for (int i = 0; i <size; i++)
    {
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    cout<<endl;

    minHeap.push(5);
    minHeap.push(0);
    minHeap.push(2);
    minHeap.push(8);
    minHeap.push(1);

    int sizeMin=minHeap.size();

    cout<<"The elements of Min Heap is below : "<<endl;
    for(int i=0;i<sizeMin;i++)
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;

    cout<<"Empty or not : "<<minHeap.empty();

    return 0;
}