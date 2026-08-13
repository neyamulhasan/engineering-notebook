#include<iostream>
using namespace std;
int main()
{
    int n;
    int n1;
    cin>>n;
    cin>>n1;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(i%2==0){
            cout<<"#";
            }
            else{
                if( j==n1-1 && flag==0){
 
                    cout<<"#";
                    
                }else if(j==0 && flag==1)
                {
                    cout<<"#";
        
                    
                }else
                cout<<".";
            }
        }
        cout<<endl;
        if(i%2!=0)
        {
            flag=1-flag;
        }
 
        
    }
 
 
 
    return 0;
}