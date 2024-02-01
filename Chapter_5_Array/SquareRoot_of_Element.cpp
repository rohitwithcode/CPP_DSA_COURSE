#include<iostream>
using namespace std;

long long int squareRoot(int element)
{
    int start=0;
    int end=element;
    long long int mid = start+(end-start)/2;
    long long int answer=-1;
    while (start <= end)
    {
        if ((mid*mid) == element)
        {
            return mid;
        }
        else if ((mid*mid)>element)
        {
            end=mid-1;
        }
        else if ((mid*mid) < element)
        {
            answer=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}
double correctSquareRoot(int element,int points,int integerSolution)
{
    double factor=1;
    double answer=integerSolution;

    for (int i = 0; i < points; i++)
    {
        factor=factor/10;
        for (double j = integerSolution; j*j < element; j=j+factor)
        {
            answer=j;
        }
    }
    return answer;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // cout<<"The square Root of "<<n<<" is : "<<squareRoot(n)<<endl;
    cout<<"The square root of "<<n<<" is :"<<correctSquareRoot(n,3,squareRoot(n));
    return 0;
}