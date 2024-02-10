#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basicArray[]={1,2,3,4,5,6};

    array<int,4> arraySTL={1,2,3,4};

    int size=arraySTL.size();
    
    for(int i=0;i<size;i++)
    {
        cout<<arraySTL[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at index 2nd is : "<<arraySTL.at(2)<<endl;
    cout<<"Empty or not : "<<arraySTL.empty()<<endl;

    cout<<"The first Element of the arrya is : "<<arraySTL.front()<<endl;
    cout<<"The last Element of the arrya is : "<<arraySTL.back()<<endl;
}