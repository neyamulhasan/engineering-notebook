#include<iostream>

using namespace std;

int main()
{
    string str;

    cin>>str;

    int k=0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            k=1;
            break;
        }
        else
        k=0;

    }

    if(k){
        cout<<"YES"<<endl;

    }
    else 
    cout<<"NO"<<endl;




    return 0;
}