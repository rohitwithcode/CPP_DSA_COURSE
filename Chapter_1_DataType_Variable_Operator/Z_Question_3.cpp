#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number  : ";
    cin>>n;
    int answer=0;
    bool b;
    for (int i = 0; i <=30; i++)
    {
        answer=pow(2,i);
    
    if (answer==n)
    {
       b=true;
       break;
    }
    }
    if (b)
    {
        cout<<"2's complement !..";
    }
    else{
        cout<<"not a 2's complement number !..";
    }
    
    return 0;
}