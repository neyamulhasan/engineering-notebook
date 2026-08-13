#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count1=1,count2=1;
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i-1]<=arr[i])
        {
            count2++;
        }
        else{
            count1=max(count1,count2);
            count2=1;
        }

        
    }

    count1=max(count1,count2);

    cout<<count1;






    return 0;
}