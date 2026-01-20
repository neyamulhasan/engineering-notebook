#include<iostream>
#include<string>

using namespace std;

int main ()
{
    int a=0;
    int d=0;
    int x;
    string str; 
    cin>>x;
    cin.ignore();
    getline(cin,str);
    for(int i=0;i<=x;i++)
    {
        if(str[i]=='A'){
            a++;
        } else if(str[i]=='D'){
            d++;
        }
    }
     if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else if(a==d)
    {
        cout<<"Friendship";
    }

    return 0;
}