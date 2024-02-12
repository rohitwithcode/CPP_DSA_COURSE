#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> a;

    a.push("Radha Rani");
    a.push("Radhey Radhey");
    a.push("Bala ji");

    
    cout<<"The Top of the Queue is : "<<a.front()<<endl;
    cout<<"The back of the Queue is : "<<a.back()<<endl;

    cout<<"The size before the pop : "<<a.size()<<endl;
    a.pop();
    cout<<"The Top of the Queue after pop a value is : "<<a.front()<<endl;
    cout<<"The back of the Queue is : "<<a.back()<<endl;
    
    cout<<"The size after pop : "<<a.size();
    return 0;
}