#include<iostream>
#include<vector>
#include<cmath>
 
using namespace std;
int main()
{
    int num;
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++){
 
        cin>>num;
 
        vector<int>part;
        int count=0;
        while (num>0)
        {
            if(num%10){
                int ans =pow(10,count);
                ans*=(num%10);
                part.push_back(ans);
            }
            num=num/10;
        
            count++;
            
        }
        int size=part.size();
 
        cout<<size<<endl;
 
        for(int j=0 ;j<size;j++){
            cout<<part[j]<<" ";
 
        }
 
        cout<<endl;
 
        
    }
 
 
    return 0;
}