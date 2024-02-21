#include<iostream> 
using namespace std;

string removeSpaces(string s)
{
    string temp="";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}

int main()
{
    string s;

    cout<<"Enter your string : ";
    getline(cin,s);

    
    cout<<"Your string after the remove spaces : "<<endl;
    cout<<removeSpaces(s)<<endl;
    return 0;
}