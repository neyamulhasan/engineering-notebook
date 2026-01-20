#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();

    vector<string> word(n);

    for (int i = 0; i < n; ++i) {
        getline(cin, word[i]);
    }
    

    for(int i=0;i<n;i++){
      

        if(word[i].length()>10){
            string res=word[i].front()+to_string(word[i].length()-2)+word[i].back();

            cout<<res<<endl; 
            
        }else{

            cout<<word[i]<<endl;
        }
      


    }
    
 return 0; 




}