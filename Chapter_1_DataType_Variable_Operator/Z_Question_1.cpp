#include<iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int answer=0;
    while (n!=0)
    {

        int digit=n%10;

        if((answer>INT_MAX/10) || (answer<INT_MIN/10)){
            return 0;
        }
        answer=(answer*10)+digit;
        n=n/10;

    }
    cout<<"Your answer in reverse order is : "<<answer<<endl;
}