#include<iostream>

using namespace std ;

int main ()

{
    int r=0;
    int n;
    int x;
    int c;
    cin>>n>>x>>c;

    for(int i=1;i<=c;i++){
        r=r+n*i;
    }

    if(r<=x){
        cout<<0;
    }
    else
    cout<<r-x<<endl;




}