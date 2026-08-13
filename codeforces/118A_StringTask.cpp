#include<iostream>
#include<string>
#include<cstring>
#include <cctype>

using namespace std;

int main()
{
    string word;


    cin>>word;

    char ar[word.length()+1];
    strcpy(ar,word.c_str());

      int x=word.length() ;
   
     for( int i = 0 ; i <x; i++){
        if (!(ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'y' ||
                  ar[i] == 'u' || ar[i] == 'o' || ar[i] == 'i' || ar[i] == 'A' || ar[i] == 'E' || ar[i] == 'Y' ||
                  ar[i] == 'U' || ar[i] == 'O' || ar[i] == 'I')) {
                    char nw = tolower(ar[i]);
                    cout<<"."<<nw;

            }

     }


  cout<<endl;

    return 0;
}