#include<iostream>
#include<list>
using namespace std;


int  main()
{
    list<int> l;

    list<int> l1(l); // initialiize by empty list ....
    cout<<"list l1 is ....."<<endl;
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> l2(5,1000);
    cout<<"list l2 is ....."<<endl;
    for(int i : l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    l.push_back(0);

    cout<<"list l is ....."<<endl;
    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    cout<<"list after erase : "<<endl;
    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"The size of the list is : "<<l.size()<<endl;

    return 0;
}