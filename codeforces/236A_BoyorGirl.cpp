#include<iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main ()
{
    string str;

    cin>>str;

    unordered_set<char> s;

    for(int i=0;i<str.size();i++){
        s.insert(str[i]);


    }
      
      int res=s.size();

      if(res%2==0){
        cout<<"CHAT WITH HER!"<<endl;
      }
      else
      cout<<"IGNORE HIM!"<<endl;


    return 0;
}