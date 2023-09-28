 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter the n ";
    cin>>n;

    int row=1;

    while (row<=n)
    {

        // space Printing
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }

        // stars Printin
        int column=1;
        while (column<=row)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
    
 return 0;
 }