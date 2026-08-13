#include<iostream>
#include<cmath>

using namespace std;

int main ()
{

    long double m,n,a;

    cin>>m>>n>>a;
    long double j=m/a;
    long double k=n/a;

    long long int x=ceil(j);

    long long int y=ceil(k);

    cout<<x*y<<endl;



    return 0;
}