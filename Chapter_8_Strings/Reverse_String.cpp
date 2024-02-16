#include<iostream> 
using namespace std;

void reverseString(char str[],int size)
{
    int start=0;
    int end=size-1;
    while (start < end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int getLength(char name[])
{
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[20];

    cout<<"Enter your string : ";
    cin>>ch;

    cout<<"String before reverse :"<<endl;
    cout<<ch;
    cout<<endl;
    int length=getLength(ch);
    cout<<"The Length of the string : "<<length<<endl;
    reverseString(ch,length);
    cout<<"String after reverse :"<<endl;
    cout<<ch;
    cout<<endl;
    return 0;
}