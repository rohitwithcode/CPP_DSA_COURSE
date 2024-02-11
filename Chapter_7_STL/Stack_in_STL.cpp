#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Rohit");
    s.push("Mohit");
    s.push("Radha Rani");

    cout<<"The Stack is ........."<<endl;
    
    cout<<"The Top Element is : "<<s.top()<<endl;
    s.pop();
    cout<<"The Top Element is after pop : "<<s.top()<<endl;

    cout<<"The size  of the Stack is : "<<s.size()<<endl;
    cout<<"This is empty or not : "<<s.empty()<<endl;

    // s.emplace();

}