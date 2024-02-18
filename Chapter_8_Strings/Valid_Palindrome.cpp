#include<iostream>
using namespace std;

bool validCharacter(char ch)
{
    if( (ch=='a' && ch=='z') || (ch=='A' && ch=='Z') || (ch='0' && ch=='9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool palindromeString(string s)
{
    int start=0;
    int end=s.length()-1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
           return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
char toLowerCase(char ch)
{
    if ((ch>='a' && ch <='z') || (ch=='0' && ch=='9'))
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}
bool isValidPalindrome(string s)
{
    // Faltu characters hata do
    string temp="";

    for (int j = 0; j < s.length(); j++)
    {
        if (validCharacter(s[j]))
        {
            temp.push_back(s[j]);
        }   
    }

    // lowercase me kardo
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i]=toLowerCase(temp[i]);
    }

    // check palindrome
    return palindromeString(temp);
}


int main()
{

   string s;

   cout<<"Enter your string : ";
   cin>>s;

   bool valid=isValidPalindrome(s);

   if (valid)
   {
    cout<<"Your string is valid palindrome :"<<endl;
   }
   else
   {
    cout<<"Your String is not valid palindrome." <<endl;
   }
   {
    /* code */
   }
   
    
    return 0;
}