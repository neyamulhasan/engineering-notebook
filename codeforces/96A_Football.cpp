#include<iostream>
#include<string>

using namespace std;

int main ()
{
    string n;

    getline(cin,n);

    if(n.find("0000000")<n.length() || n.find("1111111")<n.length())
    {
    cout<<"YES"<<endl;
    
    }else {
        cout<<"NO"<<endl;
    }
    
    return 0;

}