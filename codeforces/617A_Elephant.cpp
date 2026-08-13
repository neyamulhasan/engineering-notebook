#include<iostream>

using namespace std;

int main()
{

    long long int res=0;
    long long int x;
    cin>>x;

   res=x/5;
   if(x%5!=0)
   {

    res=res+1;
   }

    cout<<res<<endl;



    return 0;
}