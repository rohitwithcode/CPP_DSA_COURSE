#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,2};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
             if (arr[i]==arr[j])
             {
                cout<<arr[i]<<endl;
             }
        }   
    }
    
    return 0;
}
/*
#include<iostream>
using namespace std;

int duplicate(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	for(int i=1;i<size;i++){
		ans=ans^i;
	}
	return ans;
}
int main()
{
	int arr[]={1,2,3,2,1};
	
	int ans=duplicate(arr,5);
	cout<<ans;
	return 0;
}

*/