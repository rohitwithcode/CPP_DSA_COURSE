#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="Rohit";
    m[2]="Yadav";
    m[12]="Coder";

    m.insert({4,"Coding"});
    cout<<"Before erase : "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 12 : "<<m.count(12)<<endl;

    m.erase(12);

    cout<<"After erase : "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    return 0;
}