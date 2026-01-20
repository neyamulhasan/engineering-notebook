#include<iostream>

using namespace std;

int main ()
{

    int n;
    int min=0;
    int in=0;
    int out=0;
    int cap=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        cin>>out;
        min=(min)-in+out;

        if(cap<=min)
        {
            cap=min;
        }

    }

    cout<<cap<<endl;

    return 0;
}