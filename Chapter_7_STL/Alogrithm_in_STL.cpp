#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(12);
    v.push_back(14);
    v.push_back(15);

    cout<<"Element 12 present : "<<binary_search(v.begin(),v.end(),12)<<endl;

    cout<<"Lower Bound : "<<lower_bound(v.begin(),v.end(),14)-v.begin()<<endl;
    cout<<"Upper Bound : "<<upper_bound(v.begin(),v.end(),15)-v.begin()<<endl;

    int a=3;
    int b=4;

    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"A : "<<a<<", B : "<<b<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());

    cout<<"String : "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After Rotate : "<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After sorting : "<<endl;
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}