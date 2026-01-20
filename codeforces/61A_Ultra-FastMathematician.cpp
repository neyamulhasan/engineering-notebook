#include<iostream>

using namespace std;

int main()
{

    string num;
    string num1;
    

    cin>>num;
    cin>>num1;

    int res[num.length()];

    for(int i=0;i<num.length();i++)
    {
        if(num[i]==num1[i]){
            res[i]=0;
        }
        else 
        res[i]=1;
    }

    for(int j=0;j<num.length();j++)
    {
        cout<<res[j];
    }

    

    return 0;
}