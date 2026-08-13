#include<iostream>
using namespace std;


int main()
{

    int res=0;
    int n,m;
    cin>>n>>m;

    int t=n*m;

    if (t%2==0){
        res=  t/2;

    }
    else {
        t--;
        res = t/2;

    }

    cout<<res<<endl;




    return 0;

}