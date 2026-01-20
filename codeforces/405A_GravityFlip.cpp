#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int n;

    cin>>n;

    int obj[n];

    for(int i=0;i<n;i++)
    {
        cin>>obj[i];
    }

    sort(obj,obj+n);

    for(int i=0;i<n;i++)
    {   
        cout<<obj[i]<<" ";
    }


    return 0;
}