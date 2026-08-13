#include<iostream>
#include<string>

using namespace std;


int main()
{   
    string str;
    int num[100];

    getline(cin,str);

    for(int i=0;i<str.length();i=i+2){
       
     for(int j=i+2;j<str.length();j=j+2){

     if(str[i]>=str[j])
     {
        int temp =str[i];
        str[i]= str[j];
        str[j]=temp;

      }
     

 }

}

for(int k=0;k<=str.length()-1;k++){

   cout<<str[k];
}





    return 0;
}