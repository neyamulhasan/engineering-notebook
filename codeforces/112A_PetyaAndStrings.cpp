#include<iostream>
#include<string>
#include<cctype>


using namespace std;
 
 int main(){
    long long i;
    string str1,str2;
    while(cin>>str1>>str2){
        for(i=0;i<str1.size();i++){
            
            for (char &c : str1) {
                 c = tolower(c);
         }
         for (char &c : str2) {
             c = tolower(c);
         }



        }

         for(i=0; i<str2.size(); i++)
        {
            if(str1[i]>str2[i])
                {
                    cout<<"1\n";
                    return 0;}

            if(str2[i]>str1[i])
                {
                    cout<<"-1\n";
                    return 0;
                }

        }
        cout<<"0\n";




    }




    return 0;
 }