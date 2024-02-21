#include<iostream>
 using namespace std;

string replaceSpaces(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        int length=s.length();
        if (s[i] == ' ')
        {
            s[i]='@';
            s.insert(i+1,"40");
            i=i+2;
            length=length+2;
        }
    }
    return s;
}

 int main()
 {
    string s;

    cout<<"Enter your string : ";
    getline(cin,s);

    cout<<"Your string after the replace spaces in same string : "<<endl;
    cout<<replaceSpaces(s);
    return 0;
 }