#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    cin.ignore();
    string str;
    int res=0;

    for(int i=0;i<n;i++)
    {
        getline(cin,str);

        if(str[0]=='T'){
            res+=4;
        }
        else if(str[0]=='C'){
            res+=6;
        }
        else  if(str[0]=='O')
        {
            res+=8;
        }
        else if(str[0]=='D'){
            res+=12;
        }
        else if(str[0]=='I')
        {
            res+=20;
        }



    }

    cout<<res;

    return 0;
}