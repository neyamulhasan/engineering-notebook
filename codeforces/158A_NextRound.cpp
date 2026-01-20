#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int res=0;
    int temp=0;

    int n;
    int lim;

    cin>>n;
    cin >>lim;

    cin.ignore();

    vector<int> num(n);

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    for(int j=0;j<n;j++){

        if(num[j] > 0 && num[j]>=num[lim-1]){
            res++;
        }


    }
   
    cout<<res<<endl;



    return 0;
}