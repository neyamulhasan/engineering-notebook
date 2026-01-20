#include<iostream>

using namespace std;

int main()
{
    long long int res=0;
    long long int n;
    cin>>n;
    int key=1;

    if(n%2==1){
        res=-((n+1)/2);
    }
    else

    res =n/2;

    cout<<res;

    return 0;

}