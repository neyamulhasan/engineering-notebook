#include<iostream>

using namespace std;


int main ()
{
    int n;

    cin>>n;

    int ar[n];

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int j=0;j<n;j++)
    {
        arr[ar[j]-1]=j+1;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}