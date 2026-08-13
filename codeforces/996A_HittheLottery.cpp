#include<iostream>

using namespace std;

int main ()
{
    int n;

    cin>>n;
    int arr[5]={100,20,10,5,1};
    int res=0;

    for(int i=0;i<5;i++)
    {
        res=res+n/(arr[i]);
        n=n%arr[i];

    }

    cout<<res;

    return 0;
}