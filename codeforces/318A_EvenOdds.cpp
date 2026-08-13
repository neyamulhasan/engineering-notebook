#include<iostream>

using namespace std;

int main ()
{
    long long int n;
    long long int  m;

    cin>>n;
    cin>>m;


    long long codd=(n+1)/2;

    if(m<=codd){
        cout<<2*m-1;
    }

    else{
        long long ieven=m-codd;
        cout<<2*ieven;
    }

/*

    int n;
    int  m;
    


    cin>>n;
    cin>>m;

    int ar[n];

    int k=0;

    for(int i=1;i<n;i=i+2){
        
        ar[k]=i;
        k++;
    }

    //int x=k+1;

    for(int j=2;j<n;j=j+2)
    {
        ar[k]=j;
        k++;
    }

 

  
    if(n==m){
        m--;
    }

        cout<<ar[m-1];




*/


    return 0;
}