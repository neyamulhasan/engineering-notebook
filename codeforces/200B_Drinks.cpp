#include<iostream>
#include<iomanip> 

using namespace std;

int main()
{
    int n;

    cin>>n;

    int dri[n];
    int k=0;

    for(int i=0;i<n;i++)
    {
        cin>>dri[i];
        k+=dri[i];

    }

    double res=static_cast<double>(k)/n;

    cout<<fixed<<setprecision(12)<<res;


    return 0;
}