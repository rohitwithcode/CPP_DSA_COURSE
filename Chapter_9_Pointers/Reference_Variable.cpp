#include<iostream> 
using namespace std;

void update(int num) // Pass by Value
{
    num++;
}
void update2(int &num) // Pass by reference 
{
    num++;
}
// int& update3(int n)
// {
//     int num=n;
//     int &ans=num;
//     return ans;
// }

int main()
{

    /*
    int a=3;
    int & reference=a;

    cout<<a<< endl;
    a++;
    cout<<a<<endl;

    reference++;
    cout<<a<<endl;
    cout<<reference<<endl;
    return 0;
    */

   int n=4;
   cout<<"Before : "<< n<<endl;
//    update(n);
   update2(n);
   cout<<"After : "<<n<<endl;

}