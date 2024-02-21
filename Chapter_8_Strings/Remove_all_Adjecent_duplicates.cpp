#include<iostream> 
using namespace std;

string removeDuplicates(string s)
{
    string result;

    for(char ch:s)
    {
        if (! result.empty() && result[result.size()-1] == ch)
        {
            result.pop_back();
        }
        else
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    string s;

    cout<<"Enter string : ";
    getline(cin,s);

    cout<<removeDuplicates(s)<<endl;
    return 0;
}