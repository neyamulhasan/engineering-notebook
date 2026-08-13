#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    int check=1;
    int pre;

    for(int i=0;i<n;i++){
        cin>>m;
        
        if(i==0){
          pre=m;  
        }
        
        if(pre!=m){
            check=check+1;
            pre=m;
        }
        

    }


    cout<<check;


}