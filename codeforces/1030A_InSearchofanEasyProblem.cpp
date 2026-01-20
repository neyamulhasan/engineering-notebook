#include<iostream>

using namespace std;

const int MAX_SIZE = 100;

int main()
{

    int n;
    int  ar[MAX_SIZE];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }

    for(int i=0;i<n;i++)
    {
        if(ar[i]  ==1){
           cout<<"HARD";
           return 0;
        }
       

    }

    cout<<"EASY";

    return 0;


}