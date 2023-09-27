#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    if (ch>='a' && ch<='z')
    {
        cout<<"Character in LowerCase "<<ch<<endl;
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"Character in UPPERCASE "<<ch<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This Nemeric Value "<<ch<<endl;
    }
    else{
        cout<<"You enterd a invalid character\n";
    }
    
    return 0;
}