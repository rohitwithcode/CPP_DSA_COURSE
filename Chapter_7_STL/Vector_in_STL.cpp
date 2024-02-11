#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> v1(5,2);
    
    cout<<"The element of vector v1"<<endl;
    for(int k : v1)
    {
        cout<<k<<" ";
    }
    cout<<endl;

    vector<int> last(v1);

    cout<<"The element of vector last"<<endl;
    for(int k : v1)
    {
        cout<<k<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector  : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity of vector  : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity of vector  : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity of vector  : "<<v.capacity()<<endl;
    cout<<"Size of the vector : "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"Front element of vector is : "<<v.front()<<endl;
    cout<<"back element of the vector "<<v.back()<<endl;

    cout<<"The vector before the pop "<<endl;

    for(int i : v)
    {
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl;
    cout<<"The vector after the pop vecoter : "<<endl;

    for(int j : v)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    cout<<"The size of before the clear vector "<<v.size()<<endl;
    cout<<"The capacity before clear the vector "<<v.capacity()<<endl;
    
    v.clear(); // in case of clear size is zero and capacity is same 

    cout<<"The size of after clear the vector "<<v.size()<<endl;
    cout<<"The capacity after clear the vector "<<v.capacity()<<endl;

    // Iterators 
    cout<<"Iterator at begin : "<<endl;
    v.begin();
    cout<<"Iterator at ent : "<<endl;
    v.end();

    return 0;
}