#include<iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;
    int a;
    int b;
    int key=0;
    int res=0;
     
    while(n--){
        cin>>a;
        cin>>b;

        if(a%b==0){
            cout<<0<<endl;
            continue;
        }

        key=a/b;
        res=(key+1)*b;
        res-=a;
        cout<<res<<endl;



    }

    // for(int i=0;i<n;i++)
    // {
    //     cin>>a;
    //     cin>>b;

    //     if(a<b){
    //         cout<<b-a<<endl;
    //     }
    //     else{

    //     while(a%b!=0){
    //         a++;
    //         key++;
            
    //     }
    //     cout<<key<<endl;
    //     key=0;
    //   }
    // }


    return 0;
}