#include<iostream>
#include<string>

using namespace std;

int main ()
{

    int c=0;
    int n;
    cin>>n;
    cin.ignore();
    string str;

    getline(cin,str);


    for(int i=1;i<n;i++){

        if(str[i]==str[i-1]){
            c++;
        }

    }

         cout<<c<<endl;




}