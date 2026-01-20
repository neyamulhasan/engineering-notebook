#include<iostream>

using namespace std;

int main ()
{

    int n;
    int person;
    int cap;
    int res=0;
    int k=0;

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>person>>cap;

        k=cap-person;
        
        if(k>=2){
            res++;
        }

    }

    cout<<res;


}