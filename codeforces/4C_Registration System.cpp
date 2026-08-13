#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int n;

    cin>>n;

    string key;
    map<string,int>mp;


    while(n--){
        cin>>key;

        if(mp.count(key)==0){
            cout<<"OK"<<endl;
            mp[key]=0;
        }
        else{
        mp[key]++;
        cout<<key<<mp[key]<<endl;

        }

    }

    return 0;
}