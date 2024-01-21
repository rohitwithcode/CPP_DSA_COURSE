#include<iostream>
using namespace std;

bool Prime_or_Not(int number){
    bool prime=true;
    for(int i=2;i<number;i++){
        if (number%i==0)
        {
            prime=false;
            break;
        }
    }
    return prime;
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;

    bool prime=Prime_or_Not(n);
    cout<<"The number "<<n<<" is prime "<<prime;
    return 0;
}