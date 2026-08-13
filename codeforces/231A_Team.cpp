#include<iostream>
using namespace std;

int main()
{

        int n;
         cin>>n;

         int res=0;

         for(int i=0 ;i<n;i++){

            int f1,f2,f3;

            cin>>f1;
            cin>>f2;
            cin>>f3;

            if(f1+f2+f3>=2){
                res++;
            }



         }

         cout<<res<<endl;




    return 0;


}