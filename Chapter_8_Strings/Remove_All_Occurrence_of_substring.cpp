#include<iostream>
using namespace std;

string removeSubstring(string original,string subString)
{
   while (original.length() != 0 && original.find(subString)<original.length())
   {
        original.erase(original.find(subString),subString.length());
   }
   return original;
}

int main()
{
    string s,sub;

    cout<<"Enter the string : ";
    getline(cin,s);

    cout<<"Enter the sub string : ";
    cin>>sub;

    cout<<removeSubstring(s,sub)<<endl;
    return 0;
}