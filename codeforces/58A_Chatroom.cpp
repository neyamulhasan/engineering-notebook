#include<iostream>
#include<string>

using namespace std;

int main ()
{
    int res=0;
    string n;

    getline(cin,n);


    for(int i=0;i<n.length();i++){
        
        if(res==0 && n[i]=='h'){
            res++;
        }
        else if(res==1 && n[i]=='e'){
            res++;
        }
        else if(res==2 && n[i]=='l'){
            res++;
        }
        else if(res==3 && n[i]=='l'){
            res++;
        }
        else if(res==4 && n[i]=='o'){
            res++;
        }



     }

    if(res>=5){
        cout<<"YES"<<endl;
          
    }
    else 
    cout<<"NO"<<endl;


    return 0;
}