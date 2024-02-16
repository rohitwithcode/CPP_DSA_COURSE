#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch>='a' && ch <='z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

int getLength(char array[])
{
    int count=0;

    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    return count;   
}

bool palindromeString(char array[],int size)
{
    int start=0;
    int end=size-1;

    while (start <= end)
    {
        if (toLowerCase(array[start]) != toLowerCase(array[end]))
        {
           return false;
        }
        // else if (array[start]==)
        // {
        //     /* code */
        // }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    char original[20]="abcddbca";
    char palindrome[10];

    cout<<"Enter the your string : ";
    cin>>palindrome;

    int length=getLength(palindrome);

    bool b=palindromeString(palindrome,length);

    if (b)
    {
        cout<<"This String is palindrome ...."<<endl;
    }
    else
    {
        cout<<"This String is not palindrome ..."<<endl;
    }
    
    // cout<<"Your Character is : "<<toLowerCase('b')<<endl;
    // cout<<"Your character is :"<<toLowerCase('D')<<endl;
    return 0;
}