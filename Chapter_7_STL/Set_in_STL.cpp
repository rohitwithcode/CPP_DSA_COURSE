#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    s.insert(0);

    for(int element : s)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    s.erase(s.begin());
    cout<<"Set after the erase from begining below : "<<endl;
    for(int element : s)
    {
        cout<<element<<" ";
    }
    cout<<endl;

   set<int>::iterator it=s.begin();
   it++;
   it++;

   s.erase(it);
   cout<<"Set after the erase below : "<<endl;
    for(int element : s)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    cout<<"Element preset here or not : "<<s.count(2)<<endl;

    set<int>:: iterator itr=s.find(2);

    cout<<"The value present at itr is : "<<*itr<<endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}