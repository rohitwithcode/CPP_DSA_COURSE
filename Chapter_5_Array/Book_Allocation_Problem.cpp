 #include<iostream>
 using namespace std;

bool isPossible(int arr[],int size,int no_Of_Student,int mid)
{
    int studentCount=1;
    int pageSum=0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum = pageSum+arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > no_Of_Student || arr[i] > mid)
            {
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

 int main()
 {
    int arr[]={10,20,30,40};

    int start=0;
    int sum=0;
    
    for (int i = 0; i < 4; i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int answer=-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if (isPossible(arr,4,2,mid))
        {
            answer=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    
    cout<<answer<<endl;
    return 0;
 }