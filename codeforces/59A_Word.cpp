#include<iostream>
#include<string>
#include<cstring>



using namespace std;

int main()
{
    int up=0;
    int low=0;
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){

        if(str[i]>='A' && str[i]<='Z'){
                up++;
        }
        else{
            low++;
        }
    }

    


    if(up>low){
        for(int a=0;a<str.length();a++){
            putchar(toupper(str[a]));
           

        }
         cout<<endl;
    }else{
        for(int a=0;a<str.length();a++){
            putchar(tolower(str[a]));
            
        }
            cout<<endl;

    }
    



    return 0;
}