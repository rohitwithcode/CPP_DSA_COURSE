#include<iostream>
using namespace std;

void increment(int **ptr)
{
    ++(*
    *ptr);
}
int main()
{
    int n=110;
    int *ptr=&n;
    increment(&ptr);
    cout<<n<<endl;
    return 0;
}