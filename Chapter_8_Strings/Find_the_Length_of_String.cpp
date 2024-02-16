#include<iostream>
using namespace std;

int main()
{
    char ch[20];

    cout<<"Enter your string : ";
    cin>>ch;

    int count=0;
    int i=0;
   while (ch[i] != '\0')
   {
        count++;
        i++;
   }
   cout<<"The length of the string : "<<count<<endl;
    
    return 0;
}