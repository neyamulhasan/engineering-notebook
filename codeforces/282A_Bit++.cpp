#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main ()
{
    int res=0;
    int n;
    cin>>n;
    cin.ignore() ;

    vector<string> word(n);

    for(int i=0;i<n;i++)
    {
        getline(cin,word[i]);

    }

    for(int j=0;j<n;j++){

        if(word[j] == "++X"|| word[j]== "X++" ){
            res++;

        }
        else  if(word[j]== "--X" || word[j]=="X--"){
            res--;
        }

    }
    cout<<res<<endl;






    return 0;


}