#include<iostream>
using namespace std;

int getLength(string s)
{
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        count++;
    }
    return count;
}

int main()
{
    string s;


    cout<<"Enter your string : ";
    getline(cin,s);

    cout<<"Your string is : "<<s<<endl;
    return 0;
}