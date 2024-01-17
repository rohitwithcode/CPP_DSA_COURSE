#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of number : ";
    cin>>n;

    int answer=0;
    int i=0;

    // To reverse any digit number Formula below
    // [digit*pow(10,i)+answer]

    // Find any number in same way Formula below
    //[(answer*10)+digit]

    while (n!=0)
    {
        int bit=n&1;
        answer=(bit*pow(10,i))+answer;
        n=n >> 1;
        i++;
    }
    cout<<answer;
    return 0;
}