#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(0);

    cout<<"The deque after the pushback and pushfront : "<<endl;
    for(int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // cout<<"The deque after the popback : "<<endl;
    // d.pop_back();
    // for(int i : d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"The deque after the popfront : "<<endl;
    // d.pop_front();
    // for(int i : d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Print first index element : "<<d.at(1)<<endl;
    cout<<"The first element of the deque  is  : "<<d.front()<<endl;
    cout<<"The last element of the deque  is  : "<<d.back()<<endl;

    cout<<"This is empty or not : "<<d.empty()<<endl;

    //Iterators 
    d.begin();
    d.end();

    cout<<"The size before erase : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"The size after erase : "<<d.size()<<endl;

    cout<<"Elements in Deque : "<<endl;
    for(int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}